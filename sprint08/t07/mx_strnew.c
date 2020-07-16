#include "create_new_agents.h"

char *mx_strnew(const int size) {
    char *mem; 
    mem = (char *)malloc(size+1); 
        if (mem == NULL) {
            return NULL;
        }
        else {
            mem[size] = '\0';
            return mem;
        }

}
