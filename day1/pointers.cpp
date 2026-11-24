#include <iostream>

void increment(int *p) {
    *p += 1;
    std::cout << *p << "\n"; 
}

int main() {
    int i {};
    i = 10;
    int *p = &i;
    std::cout << i << "\n";
    increment(p);
    std::cout << i << "\n";
    return 0;

    //int *p = NULL;

    //*p = 12; CRASH or SOMETHING PROBABLY BAD. BEST AVOIDED.
}