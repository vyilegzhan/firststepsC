#include "libmx.h"

void *mx_memcpy(void *restrict dst, const void *restrict src, size_t n) {
    char *sr = (char *)src;
    char *ds = dst;
  
    for (size_t i = 0; i < n; i++) {
        if (sr[i] != '\0')
            ds[i] = sr[i];
        else {
            ds[i] = '\0';
            break;
        }
    }
    return dst;
}
