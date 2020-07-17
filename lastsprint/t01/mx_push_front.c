#include "list.h"

void mx_push_front(t_list **list, void *data) {
    if(*list == NULL) {
        *list = mx_create_node(data);
    }
    t_list *sec = mx_create_node(data);
    sec->next = *list;
    *list = sec;
}
