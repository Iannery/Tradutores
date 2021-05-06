#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tree.h"
#include "clang_syntax.tab.h"
extern Node* tree;

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
    writeCode(node->node1, fp);
    writeCode(node->node2, fp);
    writeCode(node->node3, fp);
    writeCode(node->node4, fp);
    if(strcmp(node->ta_code, ""))
        fprintf (fp, "%s\n", node->ta_code);
}

void writeFile(){
    FILE *fp = fopen("out.tac", "w+");
    if(fp){
        fprintf (fp, ".table\n");
        writeTable(tree, fp);
        fprintf (fp, ".code\n");
        writeCode(tree, fp);
    }
    else{
        printf("Error, could not write TAC file.\n");
    }
    fclose(fp);
}

