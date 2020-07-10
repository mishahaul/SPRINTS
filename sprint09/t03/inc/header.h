
#ifndef HEADER_H
#define HEADER_H

void mx_printchar(char c);
void mx_printint(int n);
void mx_printstr(const char *s);
char *mx_strcpy(char *dst, const char *src);
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);

#endif 


#ifndef DUPLICATE_H
#define DUPLICATE_H
#include <stdio.h>
#include <unistd.h>
#include <stdbool.h>
#include <stdlib.h>
bool mx_isdigit(int c);
bool mx_isspace(char c);
int mx_atoi(const char *str);
void mx_printchar(char c);
void mx_printint(int n);
int mx_strlen(const char *s);
int mx_strcmp(const char *s1, const char *s2);
char* mx_strncpy(char *dst, const char *src, int len);
#endif