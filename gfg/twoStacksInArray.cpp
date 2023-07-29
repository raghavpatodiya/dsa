// basically divide array in  2 and allocate each half to 1 stack
#include <bits/stdc++.h>
using namespace std;
  
class twoStacks {
    int* arr;
    int size;
    int top1, top2;
  
public: 
    // Constructor
    twoStacks(int n)
    {
        size = n;
        arr = new int[n];
        top1 = n / 2 + 1;
        top2 = n / 2;
    }

    // push to stack1
    void push1(int x){
        if(top1>0){
            top1--;
            arr[top1] = x;
        }else{
            cout<<"stack overflow by x"<<endl;
            return;
        }
    }

    //push to stack2
    void push2(int x){
        if (top2<size-1){
            top2++;
            arr[top2]=x;
    }else{
        cout<< "stack over flow by x" << endl;
    }
    }
    //pop from stack1
    int pop1(){
        if(top1<=size/2){
            int x = arr[top1];
            top1++;
            return x;
        }else{
            cout<<"stack under flow";
            exit(1);
        }
    }

    //pop from stack2
    int pop2(){
        if(top2 >= size/2+1){
            int x = arr[top2];
            top2 -- ;
            return x;
        }else{
            cout<<"Stack under flow";
            exit(1) ;
        }
    }

};

int main(){
    twoStacks ts(5);
    ts.push1(5);
    ts.push2(10);
    ts.push2(15);
    ts.push1(11);
    ts.push1(7);
    cout << "Popped element from stack1 is :"<<ts.pop1() << endl;
    ts.push2(40);
    cout << "Popped element from stack2 is :"<<ts.pop2() << endl;
    // ts.push2(40);
    // cout << "Popped element from stack2 is :"<<ts.pop2() << endl;
    return 0;
}

// it goes like this
// array    15  10(top2) | 5(top1)  11  7