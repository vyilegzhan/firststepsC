#include "libmx.h"

void mx_str_reverse(char *s) {
    int i = 0;
    int length = mx_strlen(s);
    length--;

    if (!s)
        return;
    while (i < length) {
        mx_swap_char(&s[i], &s[length]);
        i++;
        length--;
    }
}
