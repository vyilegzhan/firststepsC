#include "libmx.h"

void *mx_memmem(const void *big, size_t big_len, const void *little, size_t little_len) {
    const char *big_point = big;
    const char *little_point = little;

    if ((big_len < little_len) || (!big_len) || (!little_len))
        return NULL;
    for (size_t i = 0; i < big_len;) {
        if (big_point[i] == little_point[0]) {
            for (size_t j = 1, q = i + 1; j < little_len 
            && big_point[q] == little_point[j]; j++, q++) {
                if (j + 1 == little_len) {
                    big = big_point + q - j;
                    return (void *)big;
                }
            }
        }
        i++;
    }
    return NULL;
}
