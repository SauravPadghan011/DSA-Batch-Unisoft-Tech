#include<iostream>
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

    cout << "Enter Left for " << data << "\n";
    root->left = create_tree();

    cout << "Enter Right for " << data << "\n";
    root->right = create_tree(); 

    return root;
}

void inorder(Node *root) {

    if(root == NULL) 
        return;

    inorder(root->left);    
    cout << root->data << " ";    
    inorder(root->right);

}

void postorder(Node *root) {

    if(root == NULL) 
        return;

    inorder(root->left);    
    inorder(root->right);
    cout << root->data << " ";    
    
}

void preorder(Node *root) {

    if(root == NULL) 
        return;

    cout << root->data << " "; 
    inorder(root->left);    
    inorder(root->right);   
    
}

int main() {

    Node *root = create_tree();

    inorder(root); cout << endl;
    preorder(root); cout << endl;
    postorder(root);

    return 0;
}