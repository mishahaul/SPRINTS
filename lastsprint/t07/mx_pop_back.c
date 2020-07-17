#include "list.h"

void mx_pop_back(t_list **list){
    t_list *head = *list;
    t_list *buff;

    if (*list) {
        while (head->next->next != NULL){
            head = head->next;
        }
        buff = head->next;
        head->next = NULL;
        free(buff);
    }
}

