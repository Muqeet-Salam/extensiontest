#include <stdio.h>

int my_strcmp(const char *s1, const char *s2) {
    const char *l = s1, *r = s2;
    while (*l == *r && *l != '\0') {
        l++;
        r++;
    }
    return (unsigned char)*l - (unsigned char)*r;
}