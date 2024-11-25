#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
Node* createNode(int data){
    Node* newNode= new Node();
    newNode->data=data;
    newNode->left=nullptr;
    newNode->right=nullptr;
    return newNode;
}

Node* insert(Node* root,int data){
    if(root==nullptr) return createNode(data);
    if(data<root->data) root->left=insert(root->left,data);
    else if(data>root->data) root->right=insert(root->right,data);
    return root;
}
int main(){
    Node* root=nullptr;
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);
    root = insert(root, 80);
    cout << "Binary Search Tree created successfully!" << endl;
    return 0;
}