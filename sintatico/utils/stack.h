/***********************
 *  Ian Nery Bandeira  *
 *  170144739          *
 ***********************/

#ifndef STACK_H
#define STACK_H

typedef struct{
    int stack[100000];
} Scope;
Scope scope;

extern void initScopeStack(Scope* s);
extern int emptyScopeStack(Scope* s);
extern int searchScopeStack(Scope* s);
extern void pushScopeStack(Scope* s, int context);
extern int popScopeStack(Scope* s);
extern int seeTop(Scope* s);

#endif