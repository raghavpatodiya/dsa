// #include<iostream>
// using namespace std;

// class Node{
//     public:
//     int data;
//     Node* next;
//     //constructor
//     Node(int data){
//         this ->data = data;
//         this ->next=NULL;
//     }
// };

// //singly linked list = data + address of next node

// // create a node and insert at head
// void insertAtHead(Node* &head, int d){
//     Node* temp = new Node(d);
//     temp -> next = head;
//     head = temp;
// }
// void insertAtTail(Node* &tail, int d){
//     Node* temp = new Node(d);
//     tail -> next = temp;
//     tail = temp;
// }
// void print(Node *head){
//     Node* temp =head;
//     while (temp!= NULL) {
//         cout << temp->data <<" ";
//         temp = temp->next;
//     }
//     cout<<endl;
// }
// int main(){
//     // linked list as an array replacement 
//     Node* node1 = new Node(10);
//     // cout<<node1->data<<endl;
//     // cout<<node1->next<<endl;//should be null

//     Node* head = node1;
//     Node* tail = node1;

//     print(head);
//     insertAtHead(head, 12);
//     print(head);
//     insertAtTail(tail, 15);
//     print(head);
// }


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

// Insert a node at the head of the linked list
void insertAtHead(Node* &head, int data) {
    Node* temp = new Node(data);
    temp->next = head;
    head = temp;
}

// Insert a node at the tail of the linked list
void insertAtTail(Node* &tail, int data) {
    Node* temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

// Print the elements of the linked list
void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

// Delete the k-th element from the linked list
void deleteKthElement(Node* &head, int k) {
    if (head==NULL) {
        cout << "Already empty" << endl;
        return;
    }

    if (k==1) {
        Node* temp = head;
        head = head->next;
        delete temp;
        return;
    }
    Node* curr = head;
    Node* prev = NULL;
    int count = 1;
    while (curr != NULL && count < k) {
        prev = curr;
        curr = curr->next;
        count++;
    }
    if (curr == NULL) {
        cout<<"Invalid position. Can't delete k-th element"<<endl;
        return;
    }
    prev->next = curr->next;
    delete curr;
}

int main() {
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    print(head);

    insertAtHead(head, 12);
    print(head);

    insertAtTail(tail, 15);
    print(head);

    deleteKthElement(head, 2);
    print(head);

    return 0;
}
