#include <iostream>
#include<stack>
using namespace std;

void reverseStack(std::stack<int>& stack){
    std::stack<int> auxillary;
    cout<<"original stack : ";
    while(!stack.empty()){
        cout<<stack.top()<<" ";
        int element = stack.top();
        stack.pop();
        auxillary.push(element);
    }
    cout<<endl<<"reversed stack : ";
    while(!auxillary.empty()){
        cout<<auxillary.top()<<" ";
        auxillary.pop();
    }
}
int main(){
    std::stack<int> stack;
    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.push(4);
    stack.push(5);
    stack.push(6);
    reverseStack(stack);
    return 0;

}