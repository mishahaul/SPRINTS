#ifndef CREATE_NEW_AGENT_H
#define CREATE_NEW_AGENT_H

#include <stdlib.h>
#include <stdio.h>
// #include "agent.h"

typedef struct s_agent{
    char *name;
    int power;
    int strength;
}               t_agent;


int mx_strlen(const char *s);
char* mx_strcpy(char *dst, const char *src);
char* mx_strnew(const int size);
char* mx_strdup(const char *str);
t_agent* mx_create_agent(char* name, int power, int strength);

#endif

