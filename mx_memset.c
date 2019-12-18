#include "libmx.h"

void *mx_memset(void *b, int c, size_t len) {
    int *p = b;
    
    for (; len > 0; p++) {
        len--;
        *p = c;
    }
    return b;
}
