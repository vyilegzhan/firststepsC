#include "libmx.h"

bool mx_isspace(char c) {
    bool bl;
    char b[6] = {'\t', '\n', '\v', '\f', '\r', ' '};
    
    for (int i = 0; i <= 5; i++) {
        if (c == b[i]) {
            bl = true;
            break;
        }
        else {
            bl = false;
        }
    }
    return bl;
}
