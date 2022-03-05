#include<iostream>
#include<queue>
using namespace std;

class Node {
    public:
        int data;
        Node *left, *right;
    Node(int val) {
        data = val;
    }    
};

Node* create() {
    int data;
    cout << "Enter Data: ";
    cin >> data;

    Node *root  = NULL;
    if(data == -1) {
        return root;
    }

    root = new Node(data);
    cout << "left for " << data << " ";
    root->left = create();
    cout << "right for " << data << " ";
    root->right = create(); 
}

void Inorder(Node *root) {
    if(root == NULL) 
        return;        
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}

void LevelOrder(Node *root) {
    queue<Node*> que;
    que.push(root);

    while(!que.empty()) {
        Node *curr = que.front();
        if(curr->left != NULL)
            que.push(curr->left);
        if(curr->right != NULL)
            que.push(curr->right);
        
        que.pop();
        cout << curr->data << " ";         
    }   
}


int main() {

    Node *root = create();
    
    Inorder(root); cout << endl;

    LevelOrder(root);


    return 0;
}
