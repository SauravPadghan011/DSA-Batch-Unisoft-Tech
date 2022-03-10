#include <bits/stdc++.h>
using namespace std;

class Node {
    public:
        int data;
        Node *left, *right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* create_tree() {
    Node *root = NULL;

    int data;
    cout << "Enter Data: ";
    cin >> data;

    if(data == -1) {
        return NULL;
    }

    root = new Node(data);

    cout << "Enter Left for " << data << " ";
    root->left = create_tree();

    cout << "Enter Right for " << data << " ";
    root->right = create_tree(); 

    return root;
}

bool checkBSTUtil(Node *root, int min, int max) {
    if(root == NULL) {
        return true;
    }

    if(root->data < min || root->data > max) {
        return false;
    }

    return checkBSTUtil(root->left, min, root->data-1) &&
           checkBSTUtil(root->right, root->data+1, max);
}

bool checkBST(Node *root) {
    return checkBSTUtil(root, INT_MIN, INT_MAX);
}

void inorder(Node *root) {

    if(root == NULL) 
        return;

    inorder(root->left);    
    cout << root->data << " ";    
    inorder(root->right);

}

int main() {

    Node *root = create_tree();

    inorder(root); cout << endl;

    // Check if tree is BST or not
    if(checkBST(root)) {
        cout << "Tree is BST\n";
    } else {
        cout << "Tree is not BST";
    }

    return 0;
}