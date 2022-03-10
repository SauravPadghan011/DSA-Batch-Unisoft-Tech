#include <iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next, *prev;

    Node (int val) {
        data = val;
        next = NULL;
        prev = NULL;
    }
};
Node *head = NULL;

void insertAtStart(int data) {  
    Node *newNode = new Node(data);
    if(head == NULL) {
        head = newNode;
        return;
    }

    newNode->next = head;
    head->prev = newNode;
    head = newNode;
    // newNode->prev = newNode;
}

void insertEnd(int val) {
    Node *newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    newNode->prev = temp;
    temp->next = newNode;
}

void display() {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

int main() {

    insertAtStart(1);
    insertAtStart(2);
    insertAtStart(3);
    insertAtStart(4);
    insertAtStart(5);

    insertEnd(1);
    insertEnd(2);
    insertEnd(3);
    insertEnd(4);
    insertEnd(5);
    
    display();


    return 0;   
}