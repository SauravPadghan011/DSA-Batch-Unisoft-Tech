#include<iostream>
using namespace std;

void Insert(int *arr2, int size, int pos, int element) {

    for(int i=size-1; i>=pos-1; i--) {
        arr2[i+1] = arr2[i];
    }
    arr2[pos-1] = element;

    cout << "After Insertion: ";
    for(int i=0; i<size; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl << endl;
}

int main() {

    int size = 10;
    int *arr1 = new int[size];

    // Store elements into array
    for(int i=0; i<size; i++) {
        arr1[i] = i+1;
    }

    // Print original array
    cout << "\nOriginal Array: ";
    for(int i=0; i<size; i++) {
        cout << arr1[i] << " ";
    }

    // Take position from user
    int pos;
    cout << "\nPosition: ";
    cin >> pos;

    // Take element
    int element;
    cout << "Enter Element: ";
    cin >> element;

    // Creating new array with size 1 more than original
    int newSize = size+1;
    int *arr2 = new int[newSize];

    // copying old array into new array
    for(int i=0; i<newSize; i++) {
        arr2[i] = arr1[i];
    }

    Insert(arr2, newSize, pos, element);


    // finally delete array 1 and release memory

    return 0;
}