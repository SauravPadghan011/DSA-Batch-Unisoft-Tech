#include <iostream>
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

Node* createTree() {
    int data;
    cout << "Enter Data: ";
    cin >> data;
    
    Node *root = NULL;

    if(data == -1) {
        return root;
    }

    root = new Node(data);

    cout << "Left Data for " << data << " ";
    root->left = createTree();
    cout << "Right Data for " << data << " ";
    root->right = createTree();

    return root;
}

void Inorder(Node *root) {
    if(root == NULL) {
        return;
    }
    Inorder(root->left);
    cout << root->data <<" ";
    Inorder(root->right);
}

void Preorder(Node *root) {
    if(root == NULL) {
        return;
    }
    cout << root->data <<" ";
    Preorder(root->left);
    Preorder(root->right);
}

void Postorder(Node *root) {
    if(root == NULL) {
        return;
    }
    Postorder(root->left);
    Postorder(root->right);
    cout << root->data <<" ";
}

int main() {

    Node *root = createTree();

    cout << "Inorder: ";
    Inorder(root);

    cout << endl << "Preorder: ";
    Preorder(root);
    cout << endl << "Postorder: ";
    Postorder(root);

    return 0;
}