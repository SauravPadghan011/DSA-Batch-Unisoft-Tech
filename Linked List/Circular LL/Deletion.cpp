#include<iostream>
using namespace std;

// Node class 
class Node {
    public:
        int data;
        Node *next;
    Node (int val) {
        data = val;
        next = NULL;
    }    
};
// Initially set head and last to NULL
Node *head = NULL, *last = NULL;


// Perform Insertion at the end
void add(int data) {
    Node *newNode = new Node(data);

    // if list is empty then set newNode as head and last.
    if(head == NULL) {
        head = newNode;
        last = newNode;
    }

    // add newNode link at the end. Update the last. And make the list circular
    last->next = newNode;
    last = newNode;
    last->next = head;
}


// Display Function
void Display() {
    Node *temp = head;
    while(temp != last) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;
}

// First Traverse the list to last second of the list
// then make next of temp as circular
// update the last
void DeleteEnd() {
    Node *temp = head;
    while(temp->next->next != head) {
        temp = temp->next;
    }
    // cout << temp->data;
    temp->next = head;
    last = temp;
}


void DeleteStart() {
    head = head->next;
    last->next = head;
}

void DeletePos(int pos) {
    int i=1;
    Node *temp = head;
    while(i < pos-1) {
        temp = temp->next;
        i++;
    }

    Node *deleteTemp = temp->next;
    temp->next = temp->next->next;
    delete deleteTemp;
}

int main() {

    add(1);
    add(2);
    add(3);
    add(4);
    add(5);
    add(6);
    add(7);

    Display();

    DeleteEnd();

    Display();

    DeleteStart();

    Display();

    DeletePos(3);

    Display();
    

    return 0;
}