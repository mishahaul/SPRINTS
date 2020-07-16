#include "create_new_agents.h"

t_agent *mx_create_agent(char *name, int power, int strength) {
    t_agent *one = NULL;

    if(name == NULL)
        return NULL;
    one = (t_agent *)malloc(sizeof(t_agent));
    one->name = mx_strdup(name);
    one->power = power;
    one->strength = strength;
    return one;
}


// int main(){
//     t_agent* agent = mx_create_agent("Smith", 150, 66);
//     // t_agent one = my_create_agent("Smith", 150, 66);
//     printf("%s\n", agent->name);
// }
