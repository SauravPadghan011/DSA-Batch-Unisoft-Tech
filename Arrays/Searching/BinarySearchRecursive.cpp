#include <iostream>
using namespace std;

int Search(int arr[], int key, int low, int high) {

    int mid = low + (high-low)/2;
    if (low <= high) {
        if(arr[mid] == key)
        return mid;

        if(key < arr[mid])
            return Search(arr, key, low, mid-1);
        else
            return Search(arr, key, mid+1, high); 
    }
    return -1;         
}

int main() {

    // Take array size as a input
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    // Take array element from user
    int arr[size];
    for(int i=0; i<size; i++) {
        cout << "Element " << i+1 << ": ";
        cin >> arr[i];
    }

    // Enter the element you need to find
    int key;
    cout << "Search Element: ";
    cin >> key;

    int low = 0;
    int high = size-1;
    int loc = Search(arr, key, low, high);
    if(loc == -1) 
        cout << "Not Found";
    else
        cout << "Key Found at " << loc <<" position";
    return 0;
}