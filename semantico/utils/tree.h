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
  *  display existing tokens when printing the tree. This structure
  *  is defined and declared in the symbol_table.h, and it is being
  *  used like this since the .y %union token struct is a lot tricky to
  *  manipulate in other files, and was leading to a lot of issues.
  *
  *  The n_title attribute is also to display the correct node title
  *  when printing the tree.
  *
  *  There is a global node, to determine the tree root; and a global
  *  array of nodes, used to free all nodes, even in case of syntax errors.
  *
  *  The nodeArray methods are based in the ones made for the scope stack.
  **/
typedef struct Node {
  struct Node* node1;
  struct Node* node2;
  struct Node* node3;
  struct Node* node4;
  struct Symbol* s_token;
  char   n_title[100];
  char   n_type[6];
  char   n_cast[6];
} Node;
Node* tree;
Node* nodeArray[100000];
char typeParams[100][6];
extern int errors_sem;
extern char lastFType[6];
extern Node* createNode(char* n_title);
extern int stringNull(char* str);
extern void printTree(Node* node, int depth);
extern char* typeConflict(Node* left, Node* right);
extern void paramsHandler(Symbol* s, char* title, int line, int column, Node* node, int index);
extern void typeHandler(Node* node, int nline, int ncolumn);
extern char* expTypeHandler(Node* node);
extern void freeNode(Node* node);
extern Node* seeNodeTop();
extern void initNodeArray();
extern int emptyNodeArray();
extern int searchNodeArray();
extern void freeTree();
extern void appendNode(Node* n);

#endif
