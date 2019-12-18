#include "libmx.h"

char *mx_strtrim(const char *str) {
    int i = 0;
    int start = 0;
    int end = mx_strlen(str) - 1;
    
    if (!str) 
        return NULL;
    for(; mx_isspace(str[start]); start++);
    if (start == end + 1)
        return mx_strnew(0);
    for(; mx_isspace(str[end]); end--);
    char *result = malloc(end - start + 2);
    for (; start != end + 1; i++, start++)
        result[i] = str[start];
    result[i] = '\0';
    return result;
}
