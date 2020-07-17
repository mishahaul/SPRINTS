#include "list.h"

int mx_list_size(t_list *list) {
    t_list *head = list;
    int count = 1;
    if (!head)
        return 0;
    while (head->next != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

