#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node *next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

Node *head = NULL;

void InsertAtStart(int val){
    Node *newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        return;
    }

    newNode->next = head;
    head = newNode;
}

void InsertAtEnd(int val) {
    Node *newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        return;
    }

    Node *temp = head;
    while(temp->next != NULL) {
        temp = temp->next;
    }
    temp->next = newNode;
}

void InsertAtPos(int val, int pos) {

    if(pos == 1) {
        InsertAtStart(val);
        return;
    }

    Node *newNode = new Node(val);

    Node *temp = head;
    int i=1;
    while(i < pos-1) {
        temp = temp->next;
        i++;
    }

    newNode->next = temp->next;
    temp->next = newNode;
}

void Display() {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}


int main() {

    InsertAtEnd(10);
    InsertAtEnd(20);
    InsertAtEnd(30);
    InsertAtEnd(40);
    InsertAtEnd(50);

    InsertAtStart(60);
    InsertAtStart(70);

    InsertAtPos(100,1);

    Display();

    return 0;
}