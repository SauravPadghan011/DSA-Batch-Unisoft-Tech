#include <bits/stdc++.h>
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


void TopView(Node *root) {
    queue< pair<Node *, int>> que;
    map<int, int> mp;

    

    que.push({root,0});

    while(!que.empty()) {

        if(root == NULL) {
            return;
        }

        auto temp = que.front();
        que.pop();

        Node *node = temp.first;
        int level = temp.second;

        auto found = mp.find(level);
        if(found == mp.end()) {
            mp[level] = node->data;
        }

        if(node->left != NULL) {
            que.push({node->left, level-1});
        }
        if(node->right != NULL) {
            que.push({node->right, level+1});
        }
    }

    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->second << " ";
    }

}


int main() {

    Node *root = create();
    
    Inorder(root); cout << endl;

    TopView(root);

    return 0;
}
