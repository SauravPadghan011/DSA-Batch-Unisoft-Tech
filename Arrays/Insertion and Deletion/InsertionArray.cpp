#include <iostream>
using namespace std;

void atPos(int arr[], int size, int element, int pos) {
    for(int i=size-1; i>=pos-1; i--) {
        cout <<arr[i+1] << " ";
        arr[i+1] = arr[i];
    }
    arr[pos-1] = element;

    cout <<endl;
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
}

void atStart(int arr1[], int size, int element) {
    for(int i=size-2; i>=0; i--) {
        arr1[i+1] = arr1[i];
    }
    arr1[0] = element;

    for(int i=0; i<size; i++) {
        cout << arr1[i] << " ";
    }
}

void atEnd(int arr1[], int newArrSize, int element) {
    arr1[newArrSize-1] = element;
    for(int i=0; i<newArrSize; i++) {
        cout << arr1[i] <<" ";
    }
}

int main() {

    int choice;
    cout << "1. At End\n2. At Start\n3. At position\n";
    cout << "Choose Options: ";
    cin >> choice;

    int arr[5] = {1,2,3,4,5};
    int size =  5;

    int element;
    cout << "Enter Element: ";
    cin >> element;

    int newArrSize = size+1;
    int arr1[newArrSize];

    for(int i=0; i<size; i++) {
        arr1[i] = arr[i];
    }

    switch (choice)
    {
    case 1: atEnd(arr1, newArrSize, element);
        break;

    case 2: atStart(arr1, newArrSize, element);
        break;

    case 3: {
        int pos;
        cout << "Which Position: ";
        cin >> pos;
        atPos(arr1, newArrSize, element, pos);
        
        break;
    }
    default:
        cout << "Invalid Choice";
        break;
    }

    

    return 0;
}