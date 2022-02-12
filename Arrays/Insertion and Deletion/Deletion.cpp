#include<iostream>
using namespace std;

int Delete(int arr[], int size, int pos) {
    int temp = arr[pos-1];
    int oriSize = size;
    int newSize = size-1;
    for(int i=pos-1; i<size-1; i++) {
        // cout << arr[i] << " " << arr[i+1] << endl;
        arr[i] = arr[i+1];
    }
    // int neewSize = size--;

    cout << "After Deleting: ";
    for(int i=0; i<newSize; i++) {
        cout <<arr[i] << " ";
    }

    cout << endl;
    cout << "Original Array: ";
    for(int i=0; i<oriSize; i++) {
        cout << arr[i] << " ";
    }

    arr[oriSize-1] = temp;
    cout << endl;
    cout << "Array after adding deleted element: ";
    for(int i=0; i<oriSize; i++) {
        cout << arr[i] << " ";
    }
}

int main() {

    int size = 10;
    int arr[size] = {1,2,3,4,5,6,7,8,9,10};
    

    int pos;
    cout << "Position: ";
    cin >> pos;

    Delete(arr, size, pos);

    return 0;
}