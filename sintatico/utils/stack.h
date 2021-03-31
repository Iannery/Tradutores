#ifndef STACK_H
#define STACK_H

typedef struct{
    int stack[1000000];
} Scope;
Scope scope;

extern void initStack(Scope* s);
extern int emptyStack(Scope* s);
extern int searchStack(Scope* s);
extern void pushStack(Scope* s, int context);
extern int popStack(Scope* s);
extern int seeTop(Scope* s);

#endif