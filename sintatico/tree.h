#ifndef TREE_H
#define TREE_H

#include "symbol_table.h"
typedef struct Node {
    struct Node*  node1;
    struct Node*  node2;
    struct Node*  node3;
    struct Node*  node4;
    struct Symbol* s_token;
    char   n_type[100];
} Node;
Node *tree;
extern Node* createNode(char* n_type);
extern void printTree(Node* node, int depth);
extern void freeTree(Node* node);

#endif