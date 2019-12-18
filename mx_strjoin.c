#include "libmx.h"

char *mx_strjoin(const char *s1, const char *s2) {
    char *res;
    int len1;
    int len2;

    if (s1 == NULL && s2 == NULL)
        return NULL;
    else if (s1 == NULL)
        return mx_strdup(s2);
    else if (s2 == NULL)
        return mx_strdup(s1);
    else {
        len1 = mx_strlen(s1);
        len2 = mx_strlen(s2);
        res = mx_strnew(len1 + len2);
        for (int i = 0; s1[i] != '\0'; i++)
            res[i] = s1[i];
        for (int j = 0; s2[j] != '\0'; j++, len1++)
            res[len1] = s2[j];
    }
    return res;
}
