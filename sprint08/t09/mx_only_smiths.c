#include "only_smiths.h"

t_agent **mx_only_smiths(t_agent **agents, int strength) {
    int len = 0;
    int list = 0;
    int i = 0;

    while (agents[len]) {
        len++;
    }   
    t_agent **res = malloc(sizeof(t_agent) * len);
    while (agents[list]) {
        if ((mx_strcmp("Smith", agents[list]->name) == 0) && (agents[list]->strength < strength)) {
            res[i] = agents[list];
            i++;
        }
        list++;
    }
    res[i] = NULL;
    return res;
}

// int main() {
//     t_agent **kgb = malloc(sizeof(t_agent) * 4);

//     kgb[0] = mx_create_agent("Smith", 150, 66);
//     kgb[1] = mx_create_agent("Brown", 47, 57);
//     kgb[2] = mx_create_agent("Smith", 151, 65);
//     kgb[3] = mx_create_agent("Smith", 123, 321);
//     kgb[4] = NULL;

//     t_agent **test = mx_only_smiths(kgb, 100);    
//     int i = 0;
//     while (test[i]) {
//         printf("%s   %d   %d\n", test[i]->name, test[i]->power, test[i]->strength);
//         i++;
//     }

//     system("leaks -q a.out");
// }
