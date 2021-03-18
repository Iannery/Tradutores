

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"
#include "symbol_table.h"


extern Node* createNode(char* n_type){
    Node* node = (Node*)malloc(sizeof(Node));
    strcpy(node->n_type, n_type);
    node->node1 = NULL;
    node->node2 = NULL;
    node->node3 = NULL;
    node->node4 = NULL;
    node->s_token = NULL;
    return node;
}


extern void freeTree(Node* node) {
    if(node == NULL){
        return;
    }

    freeTree(node->node1);
    freeTree(node->node2);
    freeTree(node->node3);
    freeTree(node->node4);

    
    free(node->s_token);
    free(node);
}

extern void printTree(Node* node, int depth){
    printf("\n");
    
    if(!node){
        return;
    }
    if(depth == 0){
        printf(" %s", node->n_type);
    }
    else{
        for(int i = 0; i < depth; i++){
            printf("-");
        }
        printf(" %s ", node->n_type);

    }
    if(node->node1){
        printTree(node->node1, depth + 1);
    }
    if(node->node2){
        printTree(node->node2, depth);
    }
    if(node->node3){
        printTree(node->node3, depth);
    }
    if(node->node4){
        printTree(node->node4, depth);
    }
    if(node->s_token){
        printf(" %s\n", node->s_token->s_title);

    }

}