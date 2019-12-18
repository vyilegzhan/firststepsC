#include "libmx.h"

void mx_push_back(t_list **list, void *data) {
    t_list* new = mx_create_node(data);
    t_list* end = *list;

    if (*list == NULL)
        *list = new;  
    else {
        while (end->next != NULL)
            end = end->next;
        end->next = new;
    } 
}
