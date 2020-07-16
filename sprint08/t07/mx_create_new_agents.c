#include "create_new_agents.h"

t_agent **mx_create_new_agents(char **name, int *power, int *strength, int count) {
    t_agent **one;
    one = (t_agent **)malloc(sizeof(t_agent)*(count+1));
    for(int i = 0; i < count; i++){
        if(!mx_create_agent(name[i], power[i], strength[i]))
            return NULL;
        one[i] = mx_create_agent(name[i], power[i], strength[i]);
    }
    one[count] = NULL;
    return one;
}

// int main() {
//     char *names[]= {"Thompson", "Smith", "Colson"};
//     int powers[]= {33, 66, 99};
//     int strengths[]= {133, 166, 196};
//     t_agent ** one = mx_create_new_agents(names, powers, strengths, 3);
//     printf("%s",one[2]->name);
// }

