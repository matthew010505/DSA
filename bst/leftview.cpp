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
void helper(Node* root,int level,vector<int>&res){
    if(root==nullptr) return;
    if(res.size()==level) res.push_back(root->data);
    helper(root->right,level+1,res);
    helper(root->left,level+1,res);
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
    helper(root,0,res);
    for(auto i:res) cout<<i<<" ";

    return 0;


}


