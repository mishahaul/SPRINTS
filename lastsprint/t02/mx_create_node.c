#include "list.h"

t_list *mx_create_node(void *data){
    t_list *listik = (t_list*)malloc(sizeof(t_list));
    listik->data = data;
    listik->next = NULL;
    return listik;
}
