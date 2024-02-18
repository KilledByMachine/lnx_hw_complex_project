#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include "convert.h"

int main() {
    char text[1000];
    printf("Enter text: ");
    fgets(text, sizeof(text), stdin);
    to_upper(text);
    printf("Uppercase text: %s\n", text);
    return 0;
}
