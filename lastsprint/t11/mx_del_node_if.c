#include "list.h"

void mx_del_node_if(t_list **list, void *del_data, bool (*cmp)(void *a, void *b)) {
    t_list *head = *list;
    t_list *buff;
    if (*list) {
        if (cmp(head->data, del_data)) {
            buff = head;
            head = head->next;
            free(buff);
        }
        while (head->next->next != NULL) {
            if (cmp(head->next->data, del_data)) {
                head->next = head->next->next;
                free(head->next);
            }
            head = head->next;
        }
        if (cmp(head->next->data, del_data)) {
                head->next = head->next->next;
                free(head->next);
            }
    }
}
