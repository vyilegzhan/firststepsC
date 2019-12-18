#include "libmx.h"

void *mx_memchr(const void *s, int c, size_t n){
    unsigned char *pc = (unsigned char *)s;
    size_t i = 0;
    
    while (i < n) {
        if (*pc == c)
            return pc;
        i++;
        pc++;
    }
    return NULL;
}
