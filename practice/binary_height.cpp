#include <bits/stdc++.h>
using namespace std;
struct Node {
    int value;
    Node *left;
    Node *right;

    Node(int val) {
        value = val;
        left = nullptr;
        right = nullptr;
    }
};
int maxDepth(Node *node) {
    if (node == nullptr)
        return 0;

    int leftDepth = maxDepth(node->left);
    int rightDepth = maxDepth(node->right);

    return max(leftDepth, rightDepth) + 1;
}
int main() {
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << maxDepth(root);
    return 0;
}
