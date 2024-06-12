#include <iostream>

void printStarPattern(int numStars) {
    for (int i = 0; i < numStars; i++) {
        for (int j = 0; j < numStars; j++) {
            std::cout << "**** ";
        }
        std::cout << std::endl;
    }
}

int main() {
    int numStars;
    std::cout << "Enter the number of stars: ";
    std::cin >> numStars;

    printStarPattern(numStars);

    return 0;
}