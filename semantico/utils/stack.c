/***********************
 *  Ian Nery Bandeira  *
 *  170144739          *
 ***********************/

#include <stdio.h>
#include <string.h>
#include "stack.h"
Stack scope;
 // Initializes a scope stack with -1 as their value, since the scopes
 // start at zero.
extern void initStack(Stack* s) {
    for (int i = 0; i < 1000; i++) {
        s->stack[i] = -1;
    }
}

// Returns if the stack is empty, that is, 
// if the first stack element is -1.
extern int emptyStack(Stack* s) {
    return (s->stack[0] == -1);
}

// Returns the first non-occupied position in the stack.
extern int searchStack(Stack* s) {
    for (int i = 0; i < 1000; i++) {
        if (s->stack[i] == -1) {
            return i;
        }
    }
    return -1;
}

// Pushes a context value into the stack, to generate the scope.
extern void pushStack(Stack* s, int context) {
    int idx = searchStack(s);
    if (idx >= 0) {
        s->stack[idx] = context;
    }
    else {
        printf("Push error!");
    }
}

// Pops a context value out of the stack. 
extern int popStack(Stack* s) {
    int idx = searchStack(s);
    if (idx > 0) {
        idx--;
        int val = s->stack[idx];
        s->stack[idx] = -1;
        return val;
    }
    else {
        printf("Pop error!");
        return -1;
    }
}

// See the top of the scope stack.
extern int seeTop(Stack* s) {
    int idx = searchStack(s);
    if (idx > 0) {
        idx--;
        int val = s->stack[idx];
        return val;
    }
    else {
        return -1;
    }
}

