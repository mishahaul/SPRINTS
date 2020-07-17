#include "list.h"

void mx_pop_index(t_list **list, int index) {
    t_list *head = *list;
    int count = 0;

    if (*list) {
        if (index < 0) {
            mx_pop_front(&head);
        }
        while (head->next != NULL) {
            if (count == index - 1) {
                head->next = head->next->next;
                head = head->next;
                free(head);
            }
            count++;
            head = head->next;
        }
        if(count < index) {
            mx_pop_back(&head);
        }
    }
}
