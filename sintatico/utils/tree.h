/***********************
 *  Ian Nery Bandeira  *
 *  170144739          *
 ***********************/

#ifndef TREE_H
#define TREE_H

#include "symbol_table.h"
/**
 *  The tree is composed of nodes, the structure defined below. 
 *  
 *  The node struct posesses 4 children, as it is the most children
 *  a node will ever have (when a for statement is declared).
 *
 *  The node also have a token structure, as to store and properly
 *  display existing tokens when printing the tree.
 *
 *  The n_type attribute is also to display the correct node title
 *  when printing the tree.
 **/ 
typedef struct Node {
    struct Node*  node1;
    struct Node*  node2;
    struct Node*  node3;
    struct Node*  node4;
    struct Symbol* s_token;
    char   n_type[100];
} Node;
Node* tree;
Node* nodeStack[100000];

extern Node* createNode(char* n_type);
extern void printTree(Node* node, int depth);
extern void freeTree(Node* node);
extern Node* seeNodeTop();
extern void initNodeStack();
extern int emptyNodeStack();
extern int searchNodeStack();
extern void freeTreeEmergency();
extern void pushNodeStack(Node* n);

#endif