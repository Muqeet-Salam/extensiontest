#include <stdio.h>
#include <string.h>

void stlen() {
    char *c = "Hello, World";
    int i = 0;
    char *p = c;
    while (*p != '\0') {
        i++;
        p++;
    }
    printf("%d\n", i);
}

void revst() {
    char t[] = "Hello, World!";
    char *l = t;
    char *r = t + 12;

    while (l < r) {
        char temp = *l;
        *l = *r;
        *r = temp;
        l++;
        r--;
    }
    printf("%s\n", t); 
}

void pal() {
    char s[] = "race a car";
    int c = 0;

    char *l = s;
    char *r = s + strlen(s) - 1;

    while (l < r) {
        if (*l != *r) c = 1;

        l++;
        r--;
    }

    if (c == 0) printf("Palindrome\n");
    else printf("Not Palindrome\n");

}

int main() {
    // stlen();
    // revst();
    pal();
    return 0;
}