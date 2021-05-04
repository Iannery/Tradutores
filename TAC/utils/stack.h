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
typedef struct {
    int stack[1000];
} Stack;


extern void initStack(Stack* s);
extern int emptyStack(Stack* s);
extern int searchStack(Stack* s);
extern void pushStack(Stack* s, int context);
extern int popStack(Stack* s);
extern int seeTop(Stack* s);
extern int incrementStackValue(Stack* s);

#endif
