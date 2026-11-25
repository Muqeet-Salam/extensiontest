#include <stdio.h>


size_t my_strlen(const char *str) {
    const char *r = str;
    while (*r != '\0') r++;
    return r - str;
}