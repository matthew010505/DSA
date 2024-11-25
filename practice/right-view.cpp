#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:
    int value;
    TreeNode *leftChild, *rightChild;

    TreeNode(int x) {
        value = x;
        leftChild = rightChild = nullptr;
    }
};

void rightViewUtil(TreeNode* node, int level, int& maxLevel, vector<int>& view) {
    if (!node) return;

    if (level > maxLevel) {
        view.push_back(node->value);
        maxLevel = level;
    }

    rightViewUtil(node->rightChild, level + 1, maxLevel, view);
    rightViewUtil(node->leftChild, level + 1, maxLevel, view);
}

vector<int> rightView(TreeNode *root) {
    vector<int> view;
    int maxLevel = -1;

    rightViewUtil(root, 0, maxLevel, view);
    
    return view;
}

void printVec(vector<int>& vec) {
    for (int num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    TreeNode *root = new TreeNode(1);
    root->leftChild = new TreeNode(2);
    root->rightChild = new TreeNode(3);
    root->rightChild->leftChild = new TreeNode(4);
    root->rightChild->rightChild = new TreeNode(5);

    vector<int> result = rightView(root);
    
    printVec(result);
    
    return 0;
}
