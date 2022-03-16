#include <iostream>
using namespace std;
int top = -1;
int arr[100];

void push(int val) {
    if(top == 100) {
        cout << "Stack is Full!";
        return;
    }
    top++;
    arr[top] = val;
}

int pop() {
    if(top == -1) {
        cout << "Stack is Empty!";
        return -1;
    }
    int temp = arr[top];
    top--;

    return temp;
}

void show() {
    if(top == -1) {
        cout << "Stack is Empty!";
        return;
    }
    for(int i=0; i<=top; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {

    int newArr[5] ={1,2,3,4,5};

    for(int i=0; i<5; i++){
        push(newArr[i]);
    }

    for(int i=0; i<5; i++){
        newArr[i] = pop();
    }

    for(int i=0; i<5; i++){
        cout << newArr[i] << " ";
    }

    return 0;
}