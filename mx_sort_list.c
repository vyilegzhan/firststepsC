#include "libmx.h"

t_list *mx_sort_list(t_list *head, bool (*cmp)(void *, void *)) {
    void *t;
    t_list *m;

    if (!head)
        return NULL;
    for (t_list *index = head; index->next != NULL; index = index->next) {
        m = index;
        for (t_list *sub_index = index->next; sub_index != NULL; sub_index = sub_index->next)
            if (cmp(m->data, sub_index->data))
                m = sub_index;
        t = m->data;
        m->data = index->data;
        index->data = t;
    }
    return head;
}
