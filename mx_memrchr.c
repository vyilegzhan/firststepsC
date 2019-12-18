#include "libmx.h"

void *mx_memrchr(const void *s, int c, size_t n) {
    unsigned char *pc = (unsigned char *)((size_t)s + n);
    size_t i = n;
   
    while (i >= 0) {
        if (*pc == c) {
            return pc;
        }
        i--;
        pc--;
    }
    return NULL;
}
