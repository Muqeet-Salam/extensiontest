#include <stdio.h>

char *my_strcpy(char *dest, const char *src) {
    char *d = dest;
    const char *s = src;
    while (*s != '\0') *d++ = *s++;
    *d = '\0';
    return dest;
}

int main() {
    char src[] = "hello";
    char dest[20];

    my_strcpy(dest, src);
    printf("%s\n", dest);

    return 0;
}