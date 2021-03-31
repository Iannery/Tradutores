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
extern Node* createNode(char* n_type){
    Node* node = (Node*)malloc(sizeof(Node));
    strcpy(node->n_type, n_type);
    node->node1 = NULL;
    node->node2 = NULL;
    node->node3 = NULL;
    node->node4 = NULL;
    node->s_token = NULL;
    pushNodeStack(node);
    return node;
}

/**
 * This method is also self-explanatory based on its name.
 * 
 * It runs a dfs (depth-first search) on the tree, freeing
 * the existing nodes recursively. 
**/
extern void freeTree(Node* node) {
    // recursion base, if the node does not exist, return to the recursion stack.
    if(!node){
        return;
    }
    // always free the token first, as it is independent of other nodes
    // i.e. it does not have any connected pointers within it.
    if(node->s_token){
        free(node->s_token);
    }
    // goes into the recursion to all four nodes.
    // freeTree(node->node1);
    // freeTree(node->node2);
    // freeTree(node->node3);
    // freeTree(node->node4);
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
extern void printTree(Node* node, int depth){
    // recursion base, if the node does not exist, return to the recursion stack.
    if(!node){
        return;
    }
    // print the depth as the string "--", if any, and then print the node title.
    for(int i = 0; i < depth; i++){
        printf("--");
    }
    printf("-> %s\n", node->n_type);
    // goes recursively into each children, if any, to print them with the new depth.
    if(node->node1){
        printTree(node->node1, depth + 1);
    }
    if(node->node2){
        printTree(node->node2, depth + 1);
    }
    if(node->node3){
        printTree(node->node3, depth + 1);
    }
    if(node->node4){
        printTree(node->node4, depth + 1);
    }
    // if theres a token inside the node, then print them along with their line and column.
    if(node->s_token){
        for(int i = 0; i < depth; i++){
            printf(BMAG"~~");
        }
        printf("~> [%d:%d] %s\n"reset, node->s_token->s_line,
        node->s_token->s_column,
        node->s_token->s_title);
    }

}

extern void initNodeStack(){
    for(int i = 0; i < 100000; i++){
        nodeStack[i] = NULL;
    }
}

extern int emptyNodeStack(){
    return (nodeStack[0] == NULL);
}

extern int searchNodeStack(){
    for(int i = 0; i < 100000; i++){
        if(nodeStack[i] == NULL){
            return i;
        }
    }
    return -1;
}

extern void pushNodeStack(Node* n){
    int idx = searchNodeStack();
    if(idx >= 0){
        nodeStack[idx] = n;
    }
    else{
        printf("Push error!");
    }
}
extern void freeTreeEmergency(){
    for(int i = searchNodeStack(); !emptyNodeStack(); i--){
        // if(nodeStack[i]->s_token){
        //     free(nodeStack[i]->s_token);
        // }
        // free(nodeStack[i]);
        freeTree(nodeStack[i]);
        nodeStack[i] = NULL;
    }
    // int idx = searchNodeStack();
    // if(idx > 0){
    //     idx--;
    //     int val = nodeStack[idx];
    //     nodeStack[idx] = NULL;
    // }
    // else{
    //     printf("Pop error!");
    // }
}
extern Node* seeNodeTop(){
    int idx = searchNodeStack();
    if(idx > 0){
        idx--;
        Node* val = nodeStack[idx];
        return val;
    }
    else{
        return NULL;
    }
}
