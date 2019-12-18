#include "libmx.h"

char *mx_strndup(const char *s1, size_t n) {
    size_t len = mx_strlen(s1);
    char *new = mx_strnew(len);

    if (new == NULL)
        return NULL;
    if (len > n)
        len = n;
    new = mx_strncpy(new, s1, len);
    return new;
}
