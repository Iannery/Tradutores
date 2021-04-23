/***********************
 *  Ian Nery Bandeira  *
 *  170144739          *
 ***********************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"
#include "symbol_table.h"

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

extern char* typeConflict(char* str1, char* str2){
    if((!strcmp(str1, "int") && !strcmp(str2, "int"))
    || (!strcmp(str1, "float") && !strcmp(str2, "float"))
    || (!strcmp(str1, "float") && !strcmp(str2, "int"))
    || (!strcmp(str1, "set") && !strcmp(str2, "set"))
    || (!strcmp(str1, "elem") && !strcmp(str2, "elem"))){
        return str1;
    }
    else if(!strcmp(str1, "float") && !strcmp(str2, "int")){
        return str1;
    }
    else if(!strcmp(str1, "set") && !strcmp(str2, "set")){
        return str1;
    }
}


extern char* typeHandler(Node* node) {
    char leftType[11] = "";
    char rightType[11] = "";
    if (!node) {
        return NULL;
    }
    if (node->node1) {
        strcpy(leftType, typeHandler(node->node1));
    }
    if (node->node2) {
        strcpy(rightType, typeHandler(node->node2));
    }
    if (node->s_token) {
        strcpy(node->n_type, node->s_token->s_type);
        if (!stringNull(leftType)) {
            strcpy(node->node1->n_cast, node->n_type);
        }
        if (!stringNull(rightType)) {
            strcpy(node->node2->n_cast, node->n_type);
        }
    }
    else {
        if (!stringNull(leftType) && !stringNull(rightType)) {
            strcpy(node->n_type, rightType);
            // strcpy(node->n_type, typeConflict(rightType, leftType));
        }
        else if (!stringNull(rightType)) {
            strcpy(node->n_type, rightType);
        }
        else if (!stringNull(leftType)) {
            strcpy(node->n_type, leftType);
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
