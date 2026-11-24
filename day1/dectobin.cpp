#include <iostream>

long long dectobin(int i) {
    long long res = 0;
    long long mul = 1;
    while (i > 0) {
        int rem = i%2;
        res = rem*mul + res;
        i /= 2;
        mul *= 10;
    }
    return res;
}

int main() {
    int i {};
    std::cout << "enter: ";
    std::cin >> i;
    long long res = dectobin(i);
    std::cout << "The binary representation of " << i << " is " << res << "\n";
    return 0;
}