#include<iostream>

using namespace std;

struct Node{
    int val;
    Node* left;
    Node* right;
    
    Node(int val){
        this->val=val;
        left=right=nullptr;
    }
    
};

void Inorder(Node* root){
    if(root==nullptr) return;
    Inorder(root->left);
    cout<<root->val<<" ";
    Inorder(root->right);
}

void Preorder(Node* root){
    if(root==nullptr) return;
    cout<<root->val<<" ";
    Preorder(root->left);
    Preorder(root->right);
}

void PostOrder(Node* root){
    if(root==nullptr) return;
    PostOrder(root->left);
    PostOrder(root->right);
    cout<<root->val<<" ";
}

int main(){
      Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    Inorder(root);
    Preorder(root);
    PostOrder(root);
}
