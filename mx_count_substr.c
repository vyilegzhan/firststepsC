#include "libmx.h"

int mx_count_substr(const char *str, const char *sub) {
    int count = 0;
    int s;
    int len;

    if (!str || !sub
        || sub == NULL || str == NULL)
        return -1;
    s = mx_strlen(sub);
    len = mx_strlen(str) / s;
    for (int i = 0; i < len; i++) {
        if (mx_strstr(str, sub)) {
            count++;
            str = mx_strstr(str, sub) + s;
        }
    }
    return count;
}
