#include <iostream>
using namespace std;
int front = 0;
int last = -1;
int arr[100];

void enqueue(int val) {
    if(last == 99) {
        cout << "Queue is Full!";
        return;
    }
    arr[++last] = val;
}

void dequeue() {
    if(last == -1 || front > last) {
        cout << "Queue is Empty!";
        return;
    }
    int temp = arr[front];
    front++;
}

void display() {
    int i=front;
    while(i < last+1) {
        cout << arr[i] << " ";
        i++;
    }
}


int main() {

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

   
    dequeue();
    dequeue();

    display();

    return 0;
}