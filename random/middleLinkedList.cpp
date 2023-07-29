#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node* next;
    // Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void middleLinkedList(Node* &head){
    int count=1;
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
        count++;
    }
    cout<<count<<endl;
    if(count % 2 == 0){
        int mid = count/2;
        Node* temporary = head;
        for(int i=1; i<mid;i++){
            temporary = temporary->next;
        }
        cout<<temporary->data;
    }
    else{
        int mid = count/2+1;
        Node* temporary = head;
        for(int i=1; i<mid;i++){
            temporary = temporary->next;
        }
        cout<<temporary->data;
    }
}   


int main(){
    Node* node1 = new Node(10);
    Node* node2 = new Node(9);
    Node* node3 = new Node(8);
    Node* node4 = new Node(7);
    Node* node5 = new Node(6);
    // Node* node6 = new Node(5);

    // Connect the nodes
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    // node5->next = node6;

    middleLinkedList(node1);

    return 0;
}