#include <iostream>

bool containsDigitThree(int num) {
    while (num > 0) {
        if (num % 10 == 3) {
            return true;
        }
        num /= 10;
    }
    return false;
}

void printNumbersWithoutThree(int n) {
    int count=0;
    for (int i = 1; i <= n; ++i) {
        if (!containsDigitThree(i)) {
            count++;
        }
    }
    std::cout << count;
}

int main() {
    int n;
    std::cout << "Enter a number (n): ";
    std::cin >> n; 
    std::cout << "Number of numbers from 1 to " << n << " without the digit 3: ";
    printNumbersWithoutThree(n);
    
    return 0;
}
