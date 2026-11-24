#include <iostream>

void setbit() {
    int i, pos;
    std::cout << "Enter number";
    std::cin >> i;
    std::cout << "Enter Position";
    std::cin >> pos;
    i = i | (1 << pos);
    std::cout << i << "\n";
}

void clearbit() {
    int i, pos;
    std::cout << "Enter number";
    std::cin >> i;
    std::cout << "Enter Position";
    std::cin >> pos;
    i = i & ~(1 << pos);
    std::cout << i << "\n";
}

void togglebit() {
    int i, pos;
    std::cout << "Enter number";
    std::cin >> i;
    std::cout << "Enter position";
    std::cin >> pos;
    i = i ^ (1 << pos);
    std::cout << i << "\n";
}

void checkbit() {
    int i, pos;
    std::cout << "Enter number";
    std::cin >> i;
    std::cout << "Enter position";
    std::cin >> pos;
    i = (i & (1 << pos)) != 0;
    std::cout << i << "\n";
}

int main() {
    // setbit();
    // clearbit();
    // togglebit();
    checkbit();
}