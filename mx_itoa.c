#include "libmx.h"

char *mx_itoa(int number) {
    char *res = mx_strnew(12);
    int k = 0;
    int num = (number >= 0) ? number : -number;

    if (!res)
        return NULL;
    if (number == 0) {
        res[k] = '0';
        return res;
    }
    else {
        while (num > 0) {
                res[k] = (char)((num % 10) + 48);
                num /= 10;
                k++;
        }
        if (number < 0)
            res[k] = '-';
    }
    mx_str_reverse(res);
    return res;
}
