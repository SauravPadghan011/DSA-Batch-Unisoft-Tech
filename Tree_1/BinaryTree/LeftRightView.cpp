#include<iostream>
#include<vector>
#include<list>
using namespace std;

class Node {
    public:
        int data;
        Node *left, *right;

    Node(int val) {
        data = val;
    }    
};

Node* create_tree() {
    int data;
    cout << "Enter Data: ";
    cin >> data;

    Node *root = NULL;
    if(data == -1) {
        return root;
    }

    root = new Node(data);
    cout << "Left for " << data << " ";
    root->left = create_tree();
    cout << "Right for " << data << " ";
    root->right = create_tree();

}

void Inorder(Node *root) {
    if(root == NULL) {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

void leftViewUtil(Node *root, vector<int> &v, int i) {
    if(root == NULL) {
        return;
    }

    if(v[i] == 0) {
        cout << root->data << " ";
        v[i] = root->data;
    }

    leftViewUtil(root->left, v, ++i);
    leftViewUtil(root->right, v, i);
}

void leftView(Node *root) {
    vector<int> v{0,0,0,0,0,0,0,0,0,0};
    leftViewUtil(root, v, 0);
}

void rightViewUtil(Node *root, vector<int> &v, int i) {
    if(root == NULL) {
        return;
    }

    if(v[i] == 0) {
        cout << root->data << " ";
        v[i] = root->data;
    }

    rightViewUtil(root->right, v, ++i);
    rightViewUtil(root->left, v, i);
}

void rightView(Node *root) {
    vector<int> v{0,0,0,0,0,0,0,0,0,0};
    rightViewUtil(root, v, 0);
}

int main() {

    Node *root = create_tree();

    Inorder(root); cout << endl;

    cout << "Left View of Tree: ";
    leftView(root); cout << endl;
    cout << "Right View of Tree: ";
    rightView(root); cout << endl;

    return 0;
}

/*

            5
        4       10
    3       6     
        2
    1       7
*/