#include "inc/libmx.h"

int main() {
////////mx_count_substr-test
    printf("\nTest for count_sub_str\n");
    char *str = mx_strcpy(mx_strnew(mx_strlen("yo, yo, yo Neo")),"yo, yo, yo Neo");
    char *sub = mx_strcpy(mx_strnew(mx_strlen("yo")),"yo");
    printf("%d\n", mx_count_substr(str,NULL));
    printf("___________________________________\n\n\n");
////////---------------------
    printf("\nTest for count_words\n");
    char *str1 = mx_strcpy(mx_strnew(mx_strlen("  follow  *   the  white rabbit ")), "  follow  *   the  white rabbit ");
    printf("\n%d\n",mx_count_words(str1, '*')); //returns 2
    printf("%d\n",mx_count_words(str1, ' ')); //returns 5
    printf("%d\n",mx_count_words(NULL, ' ')); //returns -1
    printf("___________________________________");
//////////del extra
    printf("\nTest for del_extra_spaces\n");
    printf("%d\n", mx_strlen(mx_del_extra_spaces("\f  My name...     is  \r Neo  \t\n ")));
    printf("\n%s\n", mx_del_extra_spaces("\f  My name...     is  \r Neo  \t\n "));
    printf("___________________________________");
///////////get substr index
    printf("\nTest for get_substr_index\n");
    printf("\n%d\n", mx_get_substr_index("McDonalds", NULL));
    printf("___________________________________");
////////////list size+creation of nodes
    printf("\nTest for list_size\n");
    t_list *list = mx_create_node("Hello");
    list->next = mx_create_node("World");
    list->next->next = mx_create_node("sdgsd");
    printf("\n%d\n", mx_list_size(list));
    printf("___________________________________");
/////////////hexto
    printf("\nTest for hexto\n");
    printf("\n%lu\n", mx_hex_to_nbr("C4"));
    printf("___________________________________");
/////////////nmbrTohex
    printf("\nTest for nmbrto\n");
    printf("\n%s\n", mx_nbr_to_hex(1000));
    printf("___________________________________");
////////////filetostr
    printf("\nTest for filetostr\n");
    printf("\n%s\n", mx_file_to_str("./text.txt"));
    printf("___________________________________");
/////////////strjoin
    printf("\nTest for strjoin\n");
    char s1[] = "this";
    char s2[] = "dodge ";
    char* s3 = NULL;
    printf("\n%s\n", mx_strjoin(s1, s3));
    printf("___________________________________");
    ////////////strlen
    printf("\nTest for strlen\n");
    char s[] = "hello world";
    printf("\n%d\n", mx_strlen(s));
    printf("___________________________________");
    ////////////itoa
    printf("\nTest for itoa\n");
    printf("\n%s\n", mx_itoa(-1111));
    printf("___________________________________");
    ////////////memset
    printf("\nTest for memset\n");
    int arr[] = {1, 2, 3, 4, 5, 6};
    mx_memset(arr, 4, 6);
    for (int i = 0; i < 6; i++)
        printf("%d\t", arr[i]);
    printf("\n___________________________________");
    ///////////memchr
    printf("\nTest for memchr\n");
    printf("%s\n", mx_memchr("Hello", 'l', 10));
    printf("\n___________________________________");
    ////////////memcmp
    printf("\nTest for memcmp\n");
    printf("%d\n", mx_memcmp("Hello", "ello", 5));
    printf("\n___________________________________");
    ///////////memcpy
    printf("\nTest for memcpy\n");
    char s4[] = "Hello";
    char s5[] = "Hell";
    mx_memcpy(s4, s5, 7);
    printf("%s\n", s4);
    printf("\n___________________________________");
    ///////////memccpy
     printf("\nTest for memccpy\n");
    char s6[] = "Hello";
    printf("%s\n", mx_memccpy(s6, "hello", 'l', 10));
    printf("\n___________________________________");
    ///////////memrchr
    printf("\nTest for memrchr\n");
    printf("%s\n", mx_memrchr("Heppy", 'p', 10));
    printf("\n___________________________________");
    ///////////memmove
    printf("\nTest for memmove\n");
    char* s7 = mx_memcpy(mx_strnew(mx_strlen("yo, yo, yo Neo")),"yo, yo, yo Neo", mx_strlen("yo, yo, yo Neo"));
    char* s8 = mx_memmove(s7, "yo Neo", 10);
    printf("%s\n", s8);
    printf("\n___________________________________");
    ///////////memmem
    printf("\nTest for memmem\n");
    char* str007 = mx_strcpy(mx_strnew(mx_strlen("yo, yo, yo Neo isn`t chosen one")),"yo, yo, yo Neo isn`t chosen one");
    char* str999 = mx_memmem(str007, mx_strlen(str007), "Neo", mx_strlen("Neo"));
    printf("%s\n", str999);
    printf("\n___________________________________");
    ///////////pop-front
    printf("\nTest for pop-front\n");
    t_list *list1 = mx_create_node("Hello");
    list1->next = mx_create_node("World");
    list1->next->next = mx_create_node("sdgsd");
    mx_pop_front(&list1);
    printf("%s\n", list1->data);
    printf("___________________________________");
    ///////////pop-back
    printf("\nTest for pop-back\n");
    t_list *list2 = mx_create_node("Hello");
    list2->next = mx_create_node("World");
    list2->next->next = mx_create_node("sdgsd");
    mx_pop_back(&list2);
    printf("%s\n", list2->next->data);
    printf("___________________________________");
    ///////////pr int
    printf("\nTest for int\n");
    mx_printint(-168568540);
    printf("\n___________________________________");
    ///////////str reverse
    printf("\nTest for str-reverse\n");
    char s9[] = "hello";
    mx_str_reverse(s9);
    printf("%s\n", s9);
    printf("___________________________________");
    ///////////pow
    printf("\nTest for pow\n");
    printf("%f\n", mx_pow(3, 3));
    printf("___________________________________");
    //////////strarr
    printf("\nTest for strarr\n");
    char *s10[] = {"hello", " ", NULL};
    mx_print_strarr(s10, " ");
    printf("___________________________________");
    //////////unicode
    printf("\nTest for unicode\n");
    mx_print_unicode(508);
    printf("___________________________________");
    //////////printstr
    printf("\nTest for str\n");
    char s11[] = "hello";
    mx_printstr(s11);
    printf("\n___________________________________");
    ///////////push-front
    printf("\nTest for push-front\n");
    t_list *list3 = mx_create_node("Hello");
    mx_push_front(&list3, "hello");
    printf("%s\n", list3->data);
    printf("___________________________________");
    ///////////----push-back
    printf("\nTest for push-back\n");
    t_list *list4 = mx_create_node("Hello");
    mx_push_front(&list4, "hello");
    printf("%s\n", list4->data);
    printf("___________________________________");
    ///////////----quick
    printf("\nTest for quick\n");
    char* arrQuick[] = {"Michelangelo", "Donatello", "Leonardo", "Raphael"};
    printf("%d\n", mx_quicksort(arrQuick, 0, 3));
    printf("___________________________________");
    ///////////----cat
    printf("\nTest for cat\n");
    char s19[] = "hello";
    printf("%s\n", mx_strcat(s19, " world"));
    printf("___________________________________");
    ///////////----trim
    printf("\nTest for trim\n");
    printf("%d\n", mx_strlen(mx_strtrim("\f My name... is Neo \t\n")));
    printf("___________________________________");
    ///////////----!errorsplit
    printf("\nTest for split\n");
    char s22[] = "**Good bye,**Mr.*Anderson.****";
    char** arrsplit = mx_strsplit(s22, '*');
    for (int i = 0; i < 3; i++)
        printf("%s\n", arrsplit[i]);
    printf("___________________________________");
    ///////////----replace substr
    printf("\nTest for repsubstr\n");
    char s23[] = "McDonalds";
    char sub1[] = "alds";
    char replace[] = "uts";
    printf("%s\n", mx_replace_substr(s23, sub1, replace));
    printf("___________________________________");
    ///////////----realloc
    printf("\nTest for realloc\n");
    char* s24 = mx_strcpy(mx_strnew(mx_strlen("yo")),"yo");
    s24 = mx_realloc(s24, 2);
    printf("%s\n", s24);
    printf("___________________________________");
    ///////////----!error-readline
    // printf("\nTest for readline\n");
   
    // printf("%s\n", mx_read_line());
    // printf("___________________________________");
}
