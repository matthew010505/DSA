#include <iostream>
#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
};

Node* create(int data){
    Node* newnode= new Node();
    newnode->data=data;
    newnode->left=nullptr;
    newnode->right=nullptr;
    return newnode;
}

Node* insert(Node *root,int data){
    if(root==nullptr) return create(data);
    if(data<root->data) root->left=insert(root->left,data);
    else if(data>root->data) root->right=insert(root->right,data);
    return root;
}
bool helper(Node* root,int min,int max){
    if(root==nullptr) return true;
    if(min>root->data || max<root->data) return false;
    return helper(root->left,min,root->data) && helper(root->right,root->data,max);
}
int main(){
    Node* root=nullptr;
    root=insert(root,20);
    root=insert(root,50);
    root=insert(root,60);
    root=insert(root,47);
    root=insert(root,35);
    
    cout<<"created bst";

    vector<int> res;
    bool ans=helper(root,INT_MIN,INT_MAX);
    if(ans) cout<<"True";
    else cout<<"false";
    
    return 0;


}


