#include "list.h"

void mx_push_back(t_list **list, void *data) {
    if(NULL == (*list)){
        (*list) = mx_create_node(data);
    }
    t_list *head = *list;
    while (head->next != NULL){
        head = head->next;
    }
    head->next = mx_create_node(data);
}
