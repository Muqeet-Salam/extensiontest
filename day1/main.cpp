#include <iostream>

int main() {
    std::cout << "Hello, world\n";
    int i = 10;

    printf("The value of i is %d\n", i);
    printf("And its address is %p\n", (void *)&i);
    return 0;
}