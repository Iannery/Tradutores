#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"
#include "clang_syntax.tab.h"

#ifndef TAC_H
#define TAC_H

void writeFile();
void writeTable(Node* node, FILE *fp);
void writeCode(Node* node, FILE *fp);
void writeMainReturn(FILE *fp);
void writeConstFunction(FILE* fp);
#endif