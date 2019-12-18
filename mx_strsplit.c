#include "libmx.h"

static char *trim_char(const char *str, char c);

char **mx_strsplit(const char *s, char c) {
    int words = mx_count_words(s, c);
    char **result = malloc((words + 1)*sizeof(char *));
    int i = 0;
    int ptr = 0;
    char *word = (char *)s;
    char *tmp = NULL;

    if (!s) 
        return NULL;
    result[words] = NULL;
    while (words--) {
        word = trim_char(word, c);
        tmp = word;
        ptr = mx_get_char_index(word, c);
        if (ptr == -1)
            result[i] = mx_strdup(word);
        else
            result[i] = mx_strndup(word, ptr);
        i++;
        word += ptr;
        free(tmp);
    }
    return result;
}

static char *trim_char(const char *str, char c) {
    int i = 0;
    int start = 0;
    int end = mx_strlen(str) - 1;
    
    if (!str) 
        return NULL;
    for(; str[start] == c; start++);
    if (start == end + 1)
        return mx_strnew(0);
    for(; str[end] == c; end--);
    char *result = malloc(end - start + 2);
    for (; start != end + 1; i++, start++)
        result[i] = str[start];
    result[i] = '\0';
    return result;
}
