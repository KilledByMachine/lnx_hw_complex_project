#include "convert.h"
#include <ctype.h>

void to_upper(char *text) {
    while (*text) {
        *text = toupper(*text);
        text++;
    }
}

void to_lower(char *text) {
    while (*text) {
        *text = tolower(*text);
        text++;
    }
}
