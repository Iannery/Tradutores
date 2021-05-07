#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"
#include "clang_syntax.tab.h"
extern Node* tree;
int firstfunc = 0;
void writeTable(Node* node, FILE *fp){
    if (!node)
        return;
    if(strcmp(node->ta_table, ""))
        fprintf (fp, "%s\n", node->ta_table);
    writeTable(node->node1, fp);
    writeTable(node->node2, fp);
    writeTable(node->node3, fp);
    writeTable(node->node4, fp);
}

void writeCode(Node* node, FILE *fp){
    if (!node)
        return;
    
    if(strstr(node->n_title, "function ID")){
        if(firstfunc == 1){
            fprintf (fp, "return 0\n");
        }
        firstfunc = 1;
        fprintf (fp, "\n_%s:\n", node->s_token->s_title);
    }
    writeCode(node->node1, fp);
    writeCode(node->node2, fp);
    writeCode(node->node3, fp);
    writeCode(node->node4, fp);
    if(strcmp(node->ta_code, "")){
        fprintf (fp, "%s\n", node->ta_code);
    }
}


void writeMainReturn(FILE *fp){
    fprintf (fp, "return 0\n\nmain:\ncall _main, 0\n");
}

void writeConstFunction(FILE* fp){
    fprintf (fp, "\n\n//write strings char by char\n");
    fprintf (fp, "_writeStr:\n");
    fprintf (fp, "mov $1000, 0\n");
    fprintf (fp, "next_byte:\n");
    fprintf (fp, "mov $999, #1\n");
    fprintf (fp, "mov $999, $999[$1000]\n");
    fprintf (fp, "print $999\n");
    fprintf (fp, "sub $999, $1000, #0\n");
    fprintf (fp, "add $1000, $1000, 1\n");
    fprintf (fp, "brnz next_byte, $999\n");
    fprintf (fp, "return 0\n");
    fprintf (fp, "\n");
    fprintf (fp, "_writelnStr:\n");
    fprintf (fp, "call _writeStr, 2\n");
    fprintf (fp, "println\n");
    fprintf (fp, "return 0\n");
}

void writeFile(){
    FILE *fp = fopen("out.tac", "w+");
    if(fp){
        fprintf (fp, ".table\n");
        writeTable(tree, fp);
        fprintf (fp, ".code\n");
        writeConstFunction(fp);
        writeCode(tree, fp);
        writeMainReturn(fp);
    }
    else{
        printf("Error, could not write TAC file.\n");
    }
    fclose(fp);
}



