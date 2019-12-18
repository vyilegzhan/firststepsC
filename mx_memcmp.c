#include "libmx.h"

int mx_memcmp(const void *s1, const void *s2, size_t n) {
    size_t i = 0;
    unsigned char *ps1 = (unsigned char*)s1;
    unsigned char *ps2 = (unsigned char*)s2;
    
    while (i < n) {
        if (ps1[i] == '\0') {
            return 0;
        }
        if(ps1[i] != ps2[i]) {
            break;
        }
        i++;
    }
    return ps1[i] - ps2[i];
}
