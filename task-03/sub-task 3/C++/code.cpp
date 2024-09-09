#include <iostream>
#include <string>

int main() {
    int n;
    std::cout << "Enter an odd number of rows for the diamond: ";
    std::cin >> n;

    // Upper part including the middle row
    for (int i = 0; i <= n / 2; i++) {
        std::cout << std::string((n / 2) - i, ' ') + std::string(2 * i + 1, '*') << std::endl;
    }

    // Lower part (excluding the middle row)
    for (int i = (n / 2) - 1; i >= 0; i--) {
        std::cout << std::string((n / 2) - i, ' ') + std::string(2 * i + 1, '*') << std::endl;
    }

    return 0;
}
