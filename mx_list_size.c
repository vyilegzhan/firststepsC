#include "libmx.h"

int mx_list_size(t_list *list) {
    int size = 0;
    
    for (t_list *tmp = list; tmp != NULL; tmp = tmp->next) 
        size++;
        return size;
}
