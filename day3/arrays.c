#include <stdio.h>

void cparr() {
    int arr[] = {1,2 ,3 , 4,5};
    int cp[5];
    int *r = cp;
    for (int *l = arr; l < arr + 5; l++) {
        *r = *l;
        r++;
    }
    for (int *p = cp; p < cp + 5; p++) printf("%d ", *p);

}

void twodarr() {
    int arr[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    int (*p)[4] = arr;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%d ", *(*p + j));
        }
        printf("\n");
        p++;
    }
}

void sortt() {
    int arr[] = {7, 2,6 , 8 , 4, 3, 1};

    for (int *l = arr; l < arr + 7; l++) {
        for (int *r = l + 1; r < arr + 7; r++) {
            if (*r < *l) {
                int temp = *l;
                *l = *r;
                *r = temp;
            }
        }
    }

    for (int *l = arr; l < arr + 7; l++) {
        printf("%d ", *l);
    }
    printf("\n");
}

int main() {
    // cparr();
    // twodarr();
    sortt();
    return 0;
}