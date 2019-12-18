#include "libmx.h"

void mx_swap_char (char *s1, char *s2) {
    char *a = malloc(sizeof(char));

    if (!*s1 || !*s2) 
        return;
    *a = *s1;
    *s1 = *s2;
    *s2 = *a;
    free(a); 
}
