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
int main(){
    Node* root=nullptr;
    root=insert(root,20);
    root=insert(root,8);
    root=insert(root,22);
    root=insert(root,5);
    root=insert(root,3);
    root=insert(root,10);
    root=insert(root,14);
    root=insert(root,25);

    
    cout<<"created bst";

    vector<int>res;
    if(root==nullptr){
        cout<<"tree does not exist";
    }
    map<int,int>hmap;
    queue<pair<Node*,int>>q;
    q.push({root,0});
    while(!q.empty()){
        auto it = q.front();
        q.pop();
        Node* node=it.first;
        int line=it.second;
        hmap[line]=node->data;
        if(node->left!=nullptr) q.push({node->left,line-1});
        if(node->right!=nullptr) q.push({node->right,line+1});

    }
    for(auto mp:hmap){
        res.push_back(mp.second);
    } 
    for(auto i:res) cout<<i<<" ";
    return 0;


}


