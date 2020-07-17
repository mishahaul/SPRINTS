#include "list.h"

t_list *mx_sort_list(t_list *list, bool (*cmp)(void *a, void *b)) {
    t_list *start = list; 
    if (list) {
        while (list->next != NULL) {
            if (cmp(list->data, list->next->data)) {
                void *buff;
                buff = list->next->data;
                list->next->data = list->data;
                list->data = buff;
            }     
            list = list->next;
        }
    return start;
    }
    
}
