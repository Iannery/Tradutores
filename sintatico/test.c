#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <unistd.h>
#include <string.h>

void gen_unique_str(char* c) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    
    srand((unsigned) time(NULL) * getpid());

    for (int i = 0; i < 50; i++){
        c[i] = alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    c[50] = '\0';  
}

int main() {
    char c[51];
    gen_unique_str(c);
    puts(c);
    return 0;
}