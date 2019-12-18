#include "libmx.h"

static int getMinvalue(int a, int b);

void *mx_realloc(void *ptr, size_t size) {
    int strsize = getMinvalue(size, malloc_size(ptr));
    void *p = malloc(size);
    
    if (ptr == NULL && size != 0)
        return malloc(size);
    if (size == 0) {
        free(ptr);
        ptr = NULL;
        return malloc(malloc_size(0));
    }
    if (p == NULL)
        return NULL;
    mx_memmove(p, ptr, strsize);
    free(ptr);
    ptr = NULL;
    return p;
}

static int getMinvalue(int a, int b) {
    return a < b ? a : b;
}
