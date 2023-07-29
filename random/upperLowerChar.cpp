#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "The character is lowercase." << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "The character is uppercase." << endl;
    } else {
        cout << "The character is a symbol." << endl;
    }

    return 0;
}
