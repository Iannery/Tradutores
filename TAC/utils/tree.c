/***********************
 *  Ian Nery Bandeira  *
 *  170144739          *
 ***********************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"
#include "symbol_table.h"
#include "clang_syntax.tab.h"
Node* tree;
Node* nodeArray[100000];
char typeParams[100][6];
extern int errors_sem;
extern char lastFType[6];
 /**
  * This method created a node, based on a given title as a parameter.
  *
  * The only functionality is to allocate the node, point every
  * pointer to null (as to reduce valgrind errors) and return it.
 **/
extern Node* createNode(char* n_title) {
    Node* node = (Node*)malloc(sizeof(Node));
    strcpy(node->n_title, n_title);
    node->node1 = NULL;
    node->node2 = NULL;
    node->node3 = NULL;
    node->node4 = NULL;
    node->s_token = NULL;
    strcpy(node->n_type, "");
    strcpy(node->n_cast, "");
    appendNode(node);
    return node;
}

extern int stringNull(char* str) {
    if (strlen(str) <= 1) {
        return 1;
    }
    return 0;
}

extern int typeComparison(char* str1, char* type1, char* str2, char* type2) {
    return (!strcmp(str1, type1) && !strcmp(str2, type2));
}

extern char* typeConflict(Node* left, Node* right) {
    // TIPOS IGUAIS
    if (typeComparison(left->n_type, "int", right->n_type, "int")
        || typeComparison(left->n_type, "float", right->n_type, "float")
        || typeComparison(left->n_type, "elem", right->n_type, "elem")) {

        return left->n_type;
    }
    // TRATAMENTO PRA FLOAT
    else if (typeComparison(left->n_type, "float", right->n_type, "int")
        || typeComparison(left->n_type, "float", right->n_type, "elem")) {
        strcpy(right->n_cast, left->n_type);
        return left->n_type;
    }
    else if (typeComparison(right->n_type, "float", left->n_type, "int")
        || typeComparison(right->n_type, "float", left->n_type, "elem")) {

        strcpy(left->n_cast, right->n_type);
        return right->n_type;
    }
    // FIM DO TRATAMENTO PRA FLOAT
    // TRATAMENTO PRA INT
    else if (typeComparison(left->n_type, "int", right->n_type, "elem")) {
        strcpy(right->n_cast, left->n_type);
        return left->n_type;
    }
    else if (typeComparison(right->n_type, "int", left->n_type, "elem")) {
        strcpy(left->n_cast, right->n_type);
        return right->n_type;
    }
    // TRATAMENTO DE SET
    else if (!strcmp(left->n_type, "set")) {
        errors_sem++;
        if (left->s_token) {
            printf(BRED"[%03d:%03d] ", left->s_token->s_line, left->s_token->s_column);
        }
        else {
            printf(BRED"[xxx:xxx] ");
        }
        printf("SEMANTIC ERROR --> Unexpected Set in expression\n"reset);
        return "float";
    }
    else if (!strcmp(right->n_type, "set")) {
        errors_sem++;
        if (right->s_token) {
            printf(BRED"[%03d:%03d] ", right->s_token->s_line, right->s_token->s_column);
        }
        else {
            printf(BRED"[xxx:xxx] ");
        }
        printf("SEMANTIC ERROR --> Unexpected Set in expression\n"reset);
        return "float";
    }
    // FIM DE TRATAMENTO DE SET
    else {
        return left->n_type;
    }
}
extern void argsFinder(Node* node, int line, int column, int index) {
    if (!node) {
        return;
    }
    if (node->node1) {
        argsFinder(node->node1, line, column, --index);
        if (strcmp(node->node1->n_title, "call parameters")) {
            // printf(" %d %s %s\n", index - 1, node->node1->n_title, node->node1->n_type);
            if (strcmp(node->node1->n_type, typeParams[index - 1])) {
                if (!((!strcmp(typeParams[index - 1], "set")
                    && (!strcmp(node->node1->n_type, "int") || !strcmp(node->node1->n_type, "float")))
                    || ((!strcmp(typeParams[index - 1], "int") || !strcmp(typeParams[index - 1], "float"))
                        && !strcmp(node->node1->n_type, "set")))) {
                    strcpy(node->node1->n_cast, typeParams[index - 1]);
                }
                else {
                    errors_sem++;
                    printf(BRED"[%03d:%03d] ", line, column);
                    printf("SEMANTIC ERROR --> Unexpected type in function call\n"reset);
                    printf(BRED"\t\t\t          GOT: %s\n"reset, node->node1->n_type);
                }
            }
            // strcpy(typeArgs[index - 1], node->node1->n_type);
        }
        if (strcmp(node->node2->n_type, typeParams[index])) {
            if (!((!strcmp(typeParams[index], "set")
                && (!strcmp(node->node2->n_type, "int") || !strcmp(node->node2->n_type, "float")))
                || ((!strcmp(typeParams[index], "int") || !strcmp(typeParams[index], "float"))
                    && !strcmp(node->node2->n_type, "set")))) {
                strcpy(node->node2->n_cast, typeParams[index]);
            }
            else {
                errors_sem++;
                printf(BRED"[%03d:%03d] ", line, column);
                printf("SEMANTIC ERROR --> Unexpected type in function call\n"reset);
                printf(BRED"\t\t\t          GOT: %s\n"reset, node->node2->n_type);
            }
        }
        // printf(" %d %s %s\n", index, node->node2->n_title, node->node2->n_type);
        // strcpy(typeArgs[index], node->node2->n_type);
    }
}
extern void paramsHandler(Symbol* s, char* title, int line, int column, Node* node, int index) {
    int pos = findEmpty(s);
    for (int i = 0; i < pos; i++) {
        if (!strcmp(s[i].s_funcvar, "Function")) {
            if (!strcmp(title, s[i].s_title)) {
                for (int j = 0; j < index; j++) {
                    strcpy(typeParams[j], s[i].s_typeParams[j]);
                }
            }
        }
    }
    argsFinder(node, line, column, index);
}


extern void typeHandler(Node* node, int nline, int ncolumn) {
    if (!strcmp(node->n_title, "assignment operator")) {
        strcpy(node->n_type, node->s_token->s_type);
        if (strcmp(node->node1->n_type, node->s_token->s_type)) {
            if (!((!strcmp(node->s_token->s_type, "set")
                && (!strcmp(node->node1->n_type, "int") || !strcmp(node->node1->n_type, "float")))
                || ((!strcmp(node->s_token->s_type, "int") || !strcmp(node->s_token->s_type, "float"))
                    && !strcmp(node->node1->n_type, "set")))) {
                strcpy(node->node1->n_cast, node->n_type);
            }
            else {
                errors_sem++;
                printf(BRED"[%03d:%03d] ", nline, ncolumn);
                printf("SEMANTIC ERROR --> Unexpected type in \"%s\"\n"reset, node->n_title);
            }
        }
    }
    else if (!strcmp(node->n_title, "return statement")) {
        strcpy(node->n_type, lastFType);
        if (strcmp(node->node1->n_type, lastFType)) {
            if (!((!strcmp(lastFType, "set")
                && (!strcmp(node->node1->n_type, "int") || !strcmp(node->node1->n_type, "float")))
                || ((!strcmp(lastFType, "int") || !strcmp(lastFType, "float"))
                    && !strcmp(node->node1->n_type, "set")))) {
                strcpy(node->node1->n_cast, node->n_type);
            }
            else {
                errors_sem++;
                printf(BRED"[%03d:%03d] ", nline, ncolumn);
                printf("SEMANTIC ERROR --> Unexpected type in \"%s\"\n"reset, node->n_title);
            }
        }
    }
    else if (!strcmp(node->n_title, "in operator")) {
        strcpy(node->n_type, "int");
        expTypeHandler(node->node2);
        expTypeHandler(node->node1);
        if (strcmp(node->node2->n_type, "set") && strcmp(node->node2->n_type, "elem")) {
            printf("TIPO = %s\n", node->node2->n_type);
            errors_sem++;
            printf(BRED"[%03d:%03d] ", nline, ncolumn);
            printf("SEMANTIC ERROR --> Unexpected type in \"%s\"\n"reset, node->n_title);
            if (!strcmp(node->node2->n_type, "elem")) {
                strcpy(node->node2->n_cast, "set");
            }
        }
    }
}

extern char* expTypeHandler(Node* node) {
    char leftType[11] = "";
    char rightType[11] = "";
    if (!node) {
        return NULL;
    }
    if (strcmp(node->n_title, "add operator")
        && strcmp(node->n_title, "remove operator")
        && strcmp(node->n_title, "in operator")
        && strcmp(node->n_title, "exists operator")
        && strcmp(node->n_title, "is_set operator")) {
        if (node->node1) {
            strcpy(leftType, expTypeHandler(node->node1));
        }
        if (node->node2) {
            strcpy(rightType, expTypeHandler(node->node2));
        }
        if (node->s_token) {
            strcpy(node->n_type, node->s_token->s_type);
            if (strcmp(node->n_title, "function call") && strcmp(node->n_title, "call parameters")) {
                if (!stringNull(leftType)) {
                    strcpy(node->node1->n_cast, node->n_type);
                }
                if (!stringNull(rightType)) {
                    strcpy(node->node2->n_cast, node->n_type);
                }
            }
        }
        else {
            if (strcmp(node->n_title, "call parameters")) {
                if (!stringNull(leftType) && !stringNull(rightType)) {
                    strcpy(node->n_type, typeConflict(node->node1, node->node2));
                }
                else if (!stringNull(rightType)) {
                    strcpy(node->n_type, rightType);
                }
                else if (!stringNull(leftType)) {
                    strcpy(node->n_type, leftType);
                }
            }
        }
    }
    return node->n_type;
}

/**
 * This method is also self-explanatory based on its name.
 *
 * It runs a dfs (depth-first search) on the tree, freeing
 * the existing nodes recursively.
**/
extern void freeNode(Node* node) {
    // recursion base, if the node does not exist, return to the recursion stack.
    if (!node) {
        return;
    }
    // always free the token first, as it is independent of other nodes
    // i.e. it does not have any connected pointers within it.
    if (node->s_token) {
        free(node->s_token);
    }
    // goes into the recursion to all four nodes.
    // ***********UPDATE************
    // it does not do the recursion anymore, since it is now just a subroutine
    // of freeTree.

    // freeNode(node->node1);
    // freeNode(node->node2);
    // freeNode(node->node3);
    // freeNode(node->node4);
    // free the current node.
    free(node);
}

/**
 * This method is also self-explanatory based on its name.
 *
 * It runs a dfs (depth-first search) on the tree, printing
 * the existing nodes recursively, based on their "depth":
 * a parameter created to make the tree look like a tree when
 * printed, in order to better understand which node is the
 * son of the other.
**/
extern void printTree(Node* node, int depth) {
    // recursion base, if the node does not exist, return to the recursion stack.
    if (!node) {
        return;
    }
    // print the depth as the string "--", if any, and then print the node title.
    for (int i = 0; i < depth; i++) {
        printf("--");
    }
    if (!stringNull(node->n_cast)) {
        strcat(node->n_title, " (");
        strcat(node->n_title, node->n_cast);
        strcat(node->n_title, ")");
    }
    if (!stringNull(node->n_type)) {
        strcat(node->n_title, " <");
        strcat(node->n_title, node->n_type);
        strcat(node->n_title, ">");
    }
    printf("-> %s\n", node->n_title);
    // goes recursively into each children, if any, to print them with the new depth.
    if (node->node1) {
        printTree(node->node1, depth + 1);
    }
    if (node->node2) {
        printTree(node->node2, depth + 1);
    }
    if (node->node3) {
        printTree(node->node3, depth + 1);
    }
    if (node->node4) {
        printTree(node->node4, depth + 1);
    }
    // if theres a token inside the node, then print them along with their line and column.
    if (node->s_token) {
        for (int i = 0; i < depth; i++) {
            printf(BMAG"~~");
        }
        printf("~> [%03d:%03d] %s\n"reset, node->s_token->s_line,
            node->s_token->s_column,
            node->s_token->s_title);
    }

}

// Initializes the global nodeArray with all nodes pointing to NULL.
extern void initNodeArray() {
    for (int i = 0; i < 100000; i++) {
        nodeArray[i] = NULL;
    }
}

// Returns if the node array is null.
extern int emptyNodeArray() {
    return (nodeArray[0] == NULL);
}

// Search for the first occurrence of a null pointing to null and return its array position.
extern int searchNodeArray() {
    for (int i = 0; i < 100000; i++) {
        if (nodeArray[i] == NULL) {
            return i;
        }
    }
    return -1;
}

// Points the first occurrence of a null node and point it to an existing node.
extern void appendNode(Node* n) {
    int idx = searchNodeArray();
    if (idx >= 0) {
        nodeArray[idx] = n;
    }
    else {
        printf("Push error!");
    }
}

// Goes through the whole tree and frees all the nodes, until the array is empty.
extern void freeTree() {
    for (int i = searchNodeArray(); !emptyNodeArray(); i--) {
        // if(nodeArray[i]->s_token){
        //     free(nodeArray[i]->s_token);
        // }
        // free(nodeArray[i]);
        freeNode(nodeArray[i]);
        nodeArray[i] = NULL;
    }
    // int idx = searchNodeArray();
    // if(idx > 0){
    //     idx--;
    //     int val = nodeArray[idx];
    //     nodeArray[idx] = NULL;
    // }
    // else{
    //     printf("Pop error!");
    // }
}

// returns the last node not pointing to null inside the array.
extern Node* seeNodeTop() {
    int idx = searchNodeArray();
    if (idx > 0) {
        idx--;
        Node* val = nodeArray[idx];
        return val;
    }
    else {
        return NULL;
    }
}
