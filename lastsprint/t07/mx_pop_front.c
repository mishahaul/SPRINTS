#include "list.h"

void mx_pop_front(t_list **list) {
    if (*list) {
        t_list *head = *list;
        t_list *buff;
        buff = head;
        head->next = head;
        free(buff);
    }
}
