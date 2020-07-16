#include "exterminate_agents.h"

void mx_exterminate_agents(t_agent ***agents){
    t_agent **del_agent = *agents;
    for (int i = 0; del_agent[i]; i++) {
        free(del_agent[i]->name);
        free(del_agent[i]);
    }
    free(*agents);
    *agents = NULL;
}

