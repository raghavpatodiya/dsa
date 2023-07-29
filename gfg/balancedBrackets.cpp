#include<iostream>
#include <bits/stdc++.h>
using namespace std;

bool balancedBrackets(string expression){
    stack<char> temp;
    for(int i=0; i<expression.length();i++){
        if(temp.empty()){
            temp.push(expression[i]);
        }
        else if((temp.top()=='(' && expression[i]==')') || (temp.top()=='[' && expression[i]==']') || (temp.top()=='{' && expression[i]=='}')){
            temp.pop();
        }
        else{
            temp.push(expression[i]);
        }
    }
    if(temp.empty()){
        return true;
    }
    return false;
}
int main(){
    string expression;
    cout<<"Enter the expression : ";
    cin>>expression;
    if(balancedBrackets(expression)){
        cout<<"Balanced"<<endl;
    }
    else{
        cout<<"Not Balanced"<<endl;
    }
    return 0;
}