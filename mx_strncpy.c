#include "libmx.h"

char *mx_strncpy(char *dst, const char *src, int len) {
    int i = 0;
    char *new;
    int j = 0;

    if (mx_strlen(dst) <= mx_strlen(src))
        new = mx_strnew(mx_strlen(src));
    if (mx_strlen(dst) >= mx_strlen(src))
        new = mx_strnew(mx_strlen(dst));
    new = mx_strcpy(new, (const char*)dst);
    for(; new[j] != '\0'; j++)
    for (; src[i] && i < len; i++) {
        new[j] = src[i];
        j++;
    }
    return new;
}
