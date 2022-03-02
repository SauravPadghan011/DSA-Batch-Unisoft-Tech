#include<iostream>
using namespace std;

class Node {

    public:
        int data;
        Node *left, *right;
    
    Node(int val) {
        data = val;
    }    
};

Node* create_node() {
    int data;
    cout << "Enter Data: ";
    cin >> data;

    Node *root = NULL;
    if(data == -1) {
        return root;
    }

    root = new Node(data);
    cout << "Left Data for " << data << " ";
    root->left = create_node();
    cout << "Right Data for " << data << " ";
    root->right = create_node();

    return root;    
}

void Inorder(Node *root) {
    if(root == NULL) {
        return;
    }

    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

int height(Node *root) {
    if(root == NULL) {
        return 0;
    }

    return max(height(root->left), height(root->right)) + 1;
}

int main() {

    Node *root = create_node();

    Inorder(root); cout << endl;
    
    cout << "Height of Tree: " << height(root) << endl;

    return 0;
}