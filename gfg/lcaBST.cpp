#include <iostream>
struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode* parent;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr), parent(nullptr) {}
};

TreeNode* LCA(TreeNode* root, TreeNode* n1, TreeNode* n2) {// lca is basically a treenode
    if (root==nullptr || n1==nullptr || n2==nullptr)
        return nullptr;
    
    while (root!= nullptr) {
        if (n1->val<root->val && n2->val<root->val)
            root=root->left;
        else if (n1->val>root->val && n2->val>root->val)
            root=root->right;
        else
            break;  
    }    
    return root;
}

int main() {
    // tree creation
    TreeNode* root = new TreeNode(6);
    root->left = new TreeNode(2);
    root->right = new TreeNode(8);
    root->left->parent = root;
    root->right->parent = root;
    root->left->left = new TreeNode(0);
    root->left->right = new TreeNode(4);
    root->left->left->parent = root->left;
    root->left->right->parent = root->left;
    root->right->left = new TreeNode(7);
    root->right->right = new TreeNode(9);
    root->right->left->parent = root->right;
    root->right->right->parent = root->right;
    root->left->right->left = new TreeNode(3);
    root->left->right->right = new TreeNode(5);
    root->left->right->left->parent = root->left->right;
    root->left->right->right->parent = root->left->right;
    
    //define n1 and n2
    TreeNode* n1 = root->left->right->left; // defining location of nodes
    TreeNode* n2 = root->left->right->right;
    //lca calc.
    TreeNode* lca = LCA(root, n1, n2);
    //print
    if (lca != nullptr) {
        std::cout <<"LCA of "<<n1->val<<" and "<<n2->val<<" is: " <<lca->val<<std::endl;
    } 
    else {
        std::cout <<"nodes not in bst" << std::endl;
    }
    return 0;
}