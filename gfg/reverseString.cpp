#include <iostream>
#include <stack>
#include <string>

using namespace std;

string reverseString(const string& input) {
    stack<char> charStack;
    //each element of string to stack
    for (char c : input) {
        charStack.push(c);
    }
    string reversedString;
    //pop from stack and append it into reversed string
    while (!charStack.empty()) {
        reversedString += charStack.top();
        charStack.pop();
    }
    return reversedString;
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;
    string reversed = reverseString(input);
    cout << "Reversed string: " << reversed << endl;
    return 0;
}
