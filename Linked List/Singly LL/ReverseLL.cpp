#include <iostream>
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

void add(int val) {
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

void display() {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}

void reverse() {
    Node *prev = head;
    Node *front = head;

    Node *temp = head;
    temp = temp->next;
    prev->next = NULL;
    front = temp;

    while(front != NULL) {
        temp = temp->next;
        front->next = prev;
        prev = front;
        front = temp;
    }
    head = prev;
}

int main() {

    add(1);
    add(2);
    add(3);
    add(4);
    add(5);
    add(6);

    display();cout << endl;
    reverse();
    display();cout << endl;

    return 0;
}