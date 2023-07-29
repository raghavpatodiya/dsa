#include <iostream>
#include <vector>
#include <algorithm>

void binaryFrom1toN(int n) {
    for (int i = 1; i <= n; i++) {
        std::vector<int> binary;
        int num = i; //separate variable for iteration
        //case for 0
        if (num == 0) {
            binary.push_back(0);
        }

        while (num > 0) {
            int remainder = num % 2;
            binary.push_back(remainder);
            num /= 2;
        }
        //reverse the binary vector to get the binary representation
        std::reverse(binary.begin(), binary.end());
        //print the binary representation
        for (int digit : binary) {
            std::cout << digit;
        }
        std::cout << std::endl;
    }
}

int main() {
    int n;
    std::cout << "Enter a number: ";
    std::cin >> n;

    binaryFrom1toN(n);

    return 0;
}
