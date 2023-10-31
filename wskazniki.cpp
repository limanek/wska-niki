#include <iostream>

void foo(int* num) {
    std::cout << *num << std::endl;
    *num += 2;
    std::cout << *num;
}

int main() {
    int number ;
    std::cin >> number;
    foo(&number);
    return 0;
}