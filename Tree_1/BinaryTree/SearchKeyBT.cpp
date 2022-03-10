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





int isKeyBT(Node *root, int key) {
    if(root == NULL) 
        return 0;
    if(key == root->data) {
        return 1;
    }   
    return isKeyBT(root->left, key) || isKeyBT(root->right, key);
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

    // Searching in BT
    int key = 11;
    if(isKeyBT(root, key) == 1) {
        cout << key << " Found!";
    } else {
        cout << key << " Not Found!";
    }

    return 0;
}