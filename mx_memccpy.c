#include "libmx.h"

void *mx_memccpy(void *restrict dst, const void *restrict src, int c, size_t n) {
    unsigned char *a = (unsigned char *)dst;
    unsigned char *b = (unsigned char *)src;
    size_t i = 0;
    
    for (; i < n && b[i] != c; i++)
        a[i] = b[i];
    if (b[i] == c)
        return &a[i + 1];
    return NULL;
}
