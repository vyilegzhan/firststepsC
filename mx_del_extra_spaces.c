#include "libmx.h"

static int lenwsp(char *str); //Возвращает длинну строки без пробелов

char *mx_del_extra_spaces(const char *str) {
    char *str_tr = mx_strtrim(str); 
    int relen = lenwsp(str_tr); //Возвращаемая длинна
    char *res = mx_strnew(relen); //Результат
    int elem = 0; //Счётчик
    
    if (!str || !res)
        return NULL;
    if (!str_tr)
        return (char *)str;
    for (int i = 0; i < mx_strlen(str_tr); i++) {
        if (!mx_isspace(str_tr[i])) {
            res[elem] = str_tr[i];
            elem++;
        }
        else if (!mx_isspace(str_tr[i + 1])) {
            res[elem] = ' ';
            elem++;
        }
    }
    mx_strdel(&str_tr);
    return res;
}

static int lenwsp(char *str) {
    int length = 0;

    for (int i = 0; i < mx_strlen(str) - 1; i++)
        if (mx_isspace(str[i]) && mx_isspace(str[i + 1]))
            length++;
    return mx_strlen(str) - length;
}
