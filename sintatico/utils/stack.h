/***********************
 *  Ian Nery Bandeira  *
 *  170144739          *
 ***********************/

#ifndef STACK_H
#define STACK_H

/**
 * The stack, at the moment, is only used to harbor the scope, but
 * it might (and probably will) change in the future, so it was made
 * into the structure below.
 * 
 * At the moment, the stack is simulated with a vector, but the methods
 * declared here and defined in the .c make it work as a stack.
 **/ 
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