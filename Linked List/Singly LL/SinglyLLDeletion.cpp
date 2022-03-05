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

void DeletionStart() {
    Node *temp = head;
    head = head->next;
    delete temp;
}

void DeletionEnd() {
    Node *temp = head;
    while(temp->next->next != NULL) {
        // cout << temp->data << " ";
        temp = temp->next;
    }
    // cout << temp->data << " ";
    temp->next = NULL;
}

void DeletionPos() {
    Node *temp = head;
    int i=1;
    int pos=3;
    while(i<pos-2) {
        temp = temp->next;
    }
    temp->next = temp->next->next;
}

void Display() {
    Node *temp = head;
    while(temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
}



int main() {

    add(1);
    add(2);
    add(3);
    add(4);
    add(5);
    add(6);
    add(7);

    cout << "Linked List: ";
    Display();
    cout << endl;

    int choice;
    cout << "1. At Start\n2.At End\n3. At Pos\nEnter Choice: ";
    cin >> choice;

    switch(choice) {
        case 1: {
            DeletionStart();
        } 
        case 2: {
            DeletionEnd();
        }
        case 3: {
            DeletionPos();
        }
    }


    cout << "Linked List: ";
    Display();
    cout << endl;
    

    return 0;
}