// array implementation of queue
#include<iostream>
using namespace std;
#define n 20
class queue{
    protected:
    int* arr;
    int front;
    int back;
    public:
    queue(){
        arr=new int[n];
        front = -1;
        back = -1;
    }
    virtual void enqueue(int x){
        if(back == n-1){
            cout<<"Queue is full"<<endl;
            return;
        }
        back++;
        arr[back]=x;
        // only when we are  adding first element 
        if(front == -1){
            front++;
        }
    }
    void dequeue(){
        if (front==-1 || front>back) {
            cout << "Queue is already empty" << endl;
            return;
        }
        for (int i = front; i < back; i++) {
            arr[i] = arr[i + 1];
        }
        back--;  
        // if queue becomes empty
        if(front>back){
            front = -1;
            back=-1;
        }      
    }
    int peek(){
        if (front==-1 || front>back) {
            cout << "Queue is already empty" << endl;
            return -1;//False
        }
        return arr[front];
    }
    bool empty(){
        if (front==-1 || front>back) {
            return true;//1
        }
        return false;//0
    }
};
class derived : public queue{
    public:
    void dequeue(){
        if (front==-1 || front>back) {
            cout << "Queue is already empty" << endl;
            return;
        }
        for (int i = front; i < back; i++) {
            arr[i] = arr[i + 1];
        }
        back--;  
        // if queue becomes empty
        if(front>back){
            front = -1;
            back=-1;
        }           
    }
    void print(){
        cout<<"Derived"<<endl;
    } 
};
int main(){
    derived q;
    for(int i =0; i<15; i++){
        q.enqueue(i);
    }
    q.print();
    int j=12;
    while(j != 0){
        q.dequeue();
        j--;
    }
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl; 


    for(int i =0; i<9; i++){
        q.enqueue(i*2);
    }
    int k=8;
    while(k != 0){
        q.dequeue();
        k--;
    }
    cout<<q.peek()<<endl;
    cout<<q.empty()<<endl; 

    return 0;
}