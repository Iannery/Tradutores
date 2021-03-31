/***********************
 *  Ian Nery Bandeira  *
 *  170144739          *
 ***********************/

#include <stdio.h>
#include <string.h>
#include "stack.h"


extern void initScopeStack(Scope* s){
    for(int i = 0; i < 100000; i++){
        s->stack[i] = -1;
    }
}

extern int emptyScopeStack(Scope* s){
    return (s->stack[0] == -1);
}

extern int searchScopeStack(Scope* s){
    for(int i = 0; i < 100000; i++){
        if(s->stack[i] == -1){
            return i;
        }
    }
    return -1;
}
extern void pushScopeStack(Scope* s, int context){
    int idx = searchScopeStack(s);
    if(idx >= 0){
        s->stack[idx] = context;
    }
    else{
        printf("Push error!");
    }
}
extern int popScopeStack(Scope* s){
    int idx = searchScopeStack(s);
    if(idx > 0){
        idx--;
        int val = s->stack[idx];
        s->stack[idx] = -1;
        return val;
    }
    else{
        printf("Pop error!");
        return -1;
    }
}
extern int seeTop(Scope* s){
    int idx = searchScopeStack(s);
    if(idx > 0){
        idx--;
        int val = s->stack[idx];
        return val;
    }
    else{
        return -1;
    }
}

