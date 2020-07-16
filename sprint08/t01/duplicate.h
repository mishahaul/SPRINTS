#ifndef DUPLICATE_H
#define DUPLICATE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_intarr
{
    int *arr;
    int size;
}               t_intarr;

int *mx_copy_int_arr(const int *src, int size);


#endif

