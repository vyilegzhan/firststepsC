#include "libmx.h"

static void ifcless0x80(char arr[], wchar_t c);
static void ifcless0x800(char arr[], wchar_t c);
static void ifcless0x10000(char arr[], wchar_t c);
static void ifcless0x11000(char arr[], wchar_t c);

void mx_print_unicode(wchar_t c) {
    char str[5];

    if (c < 0x80)
        ifcless0x80(str, c);
    else if (c < 0x0800)
        ifcless0x800(str,c);
    else if (c < 0x010000)
        ifcless0x10000(str,c);
    else if (c < 0x110000)
        ifcless0x11000(str,c);
    write(1, str, mx_strlen(str));
}

void ifcless0x80(char arr[], wchar_t c) {
    arr[0] = ((c >> 0) & 0x7F) | 0x00;
    arr[1] = '\0';
    arr[2] = '\0';
    arr[3] = '\0';
    arr[4] = '\0';
}

void ifcless0x800(char arr[], wchar_t c) {
    arr[0] = ((c >> 6) & 0x1F) | 0xC0;
    arr[1] = ((c >> 0) & 0x3F) | 0x80;
    arr[2] = '\0';
    arr[3] = '\0';
    arr[4] = '\0';
}

void ifcless0x10000(char arr[], wchar_t c) {
    arr[0] = ((c >> 12) & 0x0F) | 0xE0;
    arr[1] = ((c >> 6) & 0x3F) | 0x80;
    arr[2] = ((c >> 0) & 0x3F) | 0x80;
    arr[3] = '\0';
    arr[4] = '\0';
}

void ifcless0x11000(char arr[], wchar_t c) {
    arr[0] = ((c >> 18) & 0x07) | 0xF0;
    arr[1] = ((c >> 12) & 0x3F) | 0x80;
    arr[2] = ((c >> 6) & 0x3F) | 0x80;
    arr[3] = ((c >> 0) & 0x3F) | 0x80;
    arr[4] = '\0';
}
