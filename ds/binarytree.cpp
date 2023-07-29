// #include<iostream>
// using namespace std;
// struct Node{
//     int data;
//     struct Node* left;
//     struct Node* right;

//     Node(int val){
//         data=val;
//         left=NULL;
//         right=NULL;
//     }
// };
// int main(){
//     struct Node* root = new Node(1);
//     root->left = new Node(2);
//     root->right = new Node(3);
//     root->right->right = new Node(4);
//     root->right->left = new Node(5);
//     return 0;

// }



#include<iostream>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    // Constructor for initialization
    // so initially we will set the left and the right pointer to null
    Node(int data) {
        this->data = data;
        this->left = NULL;
        this->right = NULL;
    }
};

//add a node
// basically data, being the value of the node to be added
// using recurssion, if tree not empty 
Node* addNode(Node* root, int data) {
    if (root == NULL) {
        return new Node(data);
    }
    else {
        if (data <= root->data) {root->left = addNode(root->left, data);
        }
        else {root->right = addNode(root->right, data);
        }
    }
    return root;
}

//delete a node
Node* deleteNode(Node* root, int data) {
    if (root==NULL) {
        return root;
    }
    else if (data < root->data){
        root->left=deleteNode(root->left,data);
    }
    else if (data>root->data){
        root->right=deleteNode(root->right,data);
    }
    else {
        if (root->left== NULL && root->right == NULL) {
            delete root;
            root = NULL;
        }
        else if (root->left == NULL) {
            Node* temp = root;
            root = root->right;
            delete temp;
        }
        else if (root->right == NULL) {
            Node* temp = root;
            root = root->left;
            delete temp;
        }
        else {
            Node* temp = root->right;
            while (temp->left != NULL) {
                temp = temp->left;
            }
            root->data=temp->data;
            root->right=deleteNode(root->right, temp->data);
        }
    }
    return root;
}

// Inorder
// basically left->root->right
void inorderTraversal(Node* root) {
    if (root!=NULL) {
        inorderTraversal(root->left);
        cout<<root->data<<" ";
        inorderTraversal(root->right);
    }
}

// Preorder
//basically here root->left->right
void preorderTraversal(Node* root) {
    if (root != NULL) {
        cout<<root->data<<" ";
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
}

// Postorder
// here left->right->root
void postorderTraversal(Node* root) {
    if (root != NULL) {
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        cout<<root->data<<" ";
    }
}

int main() {
    Node* root = NULL;
    //adding nodes
    for(int i=10;i<=60;i=i+10){
        root = addNode(root, i);
    }
    // delete the node
    root = deleteNode(root, 30);
    //testing traversals
    cout << "inorder: ";
    inorderTraversal(root);cout << endl;
    cout << "preorder: ";       
    preorderTraversal(root);cout << endl;
    cout << "postorder: ";
    postorderTraversal(root);cout << endl;
    return 0;
}
