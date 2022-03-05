#include<iostream>
using namespace std;
int count = 0;

/* 
 * Creating Class Node. 
 * Node contains data and pointer to the next node.
*/
class Node {
    public:
        int data;
        Node *next;

    // Constructor to initialize node with data 
    // and make next poiter as null    
    Node(int val) {
        data = val;
        next = NULL;
    }    
};
// Initially make head as NULL
Node *head = NULL;
Node *last = NULL;

// Method to add element in linked list at end.
void add(int val) {

    /*
     * First Create new node and pass the parameter as the element.
     * It will initialize our node with data and next pointer as Null
    */
    Node *newNode = new Node(val);

    if(head == NULL) {
        head = newNode;
        last = newNode;
        count++;
        return;
    }

    last->next = newNode;
    last = newNode;
    last->next = head;
    count++;
}

void Display() {
    Node *temp = head;

    // I can use this condition 
    // 1. temp != last
    // 2. temp->next != head
    

    cout << "Linked List (without count): ";
    while(temp->next != head) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << temp->data << endl;

    /*
     * Print the Linked list with the help 
     * of no. of count of elements in the linked list
    */
    // cout << "Linked List (with count): ";
    // for(int i=0; i<count; i++) {
    //     cout << temp->data << " ";
    //     temp = temp->next;
    // }
}

void addStart(int data) {
    Node *newNode = new Node(data);

    newNode->next = head;
    head = newNode;
    last->next = newNode;
}

int main() {

    add(1);
    add(2);
    add(3);
    add(4);
    add(5);
    add(6);

    addStart(7);
    addStart(8);

    Display();

    return 0;
}