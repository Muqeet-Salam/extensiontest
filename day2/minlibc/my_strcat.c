#include <stdio.h>

char *my_strcat(char *dest, const char *src) {
    char *l = dest;
    const char *r = src;
    while (*l != '\0') l++;
    while (*r != '\0') *l++ = *r++;
    *l = '\0';
    return dest;
}

int main() {
    char dest[20] = "Hello";
    const char *src = " World";

    printf("%s\n", my_strcat(dest, src));

    return 0;
}