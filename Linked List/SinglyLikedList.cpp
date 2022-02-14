#include <iostream>
using namespace std;

class Node{
    public:
        int data;
        Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node *head = NULL;

void InsertAtHead(int val) {
    
    Node *node = new Node(val);
    if(head == NULL) {
        head = node;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = node;
}

void Display() {
    Node *temp = head;
    while(temp->next != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {

    InsertAtHead(1);
    InsertAtHead(2);
    InsertAtHead(3);

    Display();

    return 0;
}