#include <iostream>

int main() {
    int number, sum = 0;
    std::cout << "Enter positive integers ending with 0: ";
    do {
        std::cin >> number;
        sum += number;
    } while (number != 0);
    std::cout << "The sum is " << sum << std::endl;
    return 0;
}
