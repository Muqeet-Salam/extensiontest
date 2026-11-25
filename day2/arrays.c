#include <stdio.h>

void printarr() {
    int f[5] = {1, 2, 3, 4, 5};
    int *p = f;
    for (int i = 0; i < 5; i++) {
        printf("%d, address is %p\n", *(p+i), (void *)(p+i));
    }
}

void minmax() {
    int f[6] = {4, 6, 1, 5, 2, 8};
    int mn = f[0];
    int mx = f[0];
    int *p = f;
    for (p = f; p < f + 6; p++) {
        if (*p < mn) mn = *p;
        if (*p > mx) mx = *p;
    }
    printf("min: %d, max: %d\n", mn, mx);
}

void swap() {
    int f[6] = {4, 6, 1, 5, 2, 8};
    printf("before: ");
    for (int *p = f; p < f + 6; p++) printf("%d ", *p);
    printf("\n");
    int *p = f;
    int temp = *(p+3);
    *(p+3) = *(p+4); 
    *(p+4) = temp;
    printf("after: ");
    for (int *p = f; p < f + 6; p++) printf("%d ", *p);
    printf("\n");
}

void rev() {
    int f[6] = {4, 6, 1, 5, 2, 8};
    int *l = f;
    int *r = f+5;
    while (l < r) {
        int temp = *l;
        *l = *r;
        *r = temp;
        l++;
        r--;
    }
    for (int *p = f; p < f + 6; p++) printf("%d ", *p);
}

int main() {
    // printarr();
    // minmax();
    // swap();
    // rev();
    return 0;
}