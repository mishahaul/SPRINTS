#include "list.h"

void mx_push_index(t_list **list, void *data, int index) {
    t_list *head = *list;
    int count = 0;
    t_list *one = mx_create_node(data);
    if (*list) {
        while (head->next != NULL) {
            if(count == index - 1) {
                one->next = head->next;
                head->next = one;
            }
            count++;
            head = head->next;
        }
        if(index == 0) {
            one->next = head;
        }

        if(count < index) {
            head->next = one;
            one->next = NULL;
        }
    }
}
