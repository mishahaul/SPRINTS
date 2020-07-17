#include "list.h"

void mx_clear_list(t_list **list) {
    t_list *buff = *list;
    t_list *del;
    if (*list) {
        while (buff->next != NULL) {
            del = buff;
            buff = buff->next;
            free(del);
        }
        free(buff);
        *list = NULL;
    }
}
