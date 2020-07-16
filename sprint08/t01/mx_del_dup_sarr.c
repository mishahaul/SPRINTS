#include "duplicate.h"

t_intarr *mx_del_dup_sarr(t_intarr *src) {
    if (src == NULL) {
        return NULL;
    }
    int flag[src->size];
    int count = 0;
    for (int i = 0; i < src->size; i++)
        flag[i] = 0;
    for (int i = 0; i < src->size; i++){
        while (flag[i])
            i++;
        for (int j = i+1; j < src->size; j++) {
            if (src->arr[i] == src->arr[j]) {
                flag[j] = 1;
                count++;
            }
        }
    }
    t_intarr *res = (t_intarr *)malloc(sizeof(t_intarr));
    res->size = src->size - count;
    res->arr = (int *)malloc(sizeof(int) * res->size);

    for (int i = 0, j = 0; i < src->size; i++) {
        if (!flag[i]) {
            res->arr[j] = src->arr[i];
            j++;
        } 
    }
    return res;
}



// int main(){
//     t_intarr *jopa = NULL;
//     jopa = (t_intarr*)malloc(sizeof(t_intarr));
//     int mah[] = {4,2,3,3,4,6,6,7};
//     jopa->arr = mah;
//     jopa->size = 8;
//     t_intarr *one = mx_del_dup_sarr(jopa);
//     printf("%d",one->size);
// }

