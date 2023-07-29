#include<iostream>
#include<stack>
#include <vector>
#include <algorithm>
using namespace std;

void printStack(std::stack<int>& stack){
    std::stack<int> temp;
    while(!stack.empty()){
        cout<<stack.top()<<" ";
        int element = stack.top();
        stack.pop();
        temp.push(element);
    }
    while(!temp.empty()){
        int element = temp.top(); 
        temp.pop();
        stack.push(element);
    }
}
void sortStack(std::stack<int>& stack){
    std::vector<int> arr;
    while (!stack.empty()) {
        arr.push_back(stack.top());
        stack.pop();
    }
    std::sort(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++) {
        stack.push(arr[i]);
    }
    printStack(stack);
}
int main(){
    std::stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(5);
    stack.push(3);
    stack.push(4);
    stack.push(6);
    stack.push(8);
    stack.push(7);
    cout<<"original stack : ";
    printStack(stack);
    cout<<endl;
    cout<<"sorted stack   : ";
    sortStack(stack);
}