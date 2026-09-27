#include <iostream>

int main() {
    int value = 0;

    while (value <= 0) {
        std::cout << "Enter a positive value: ";
        std::cin >> value;
    }

    std::cout << "Value: " << value << std::endl;

    return 0;
}
