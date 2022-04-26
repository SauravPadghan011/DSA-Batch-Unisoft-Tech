#include <iostream>
using namespace std;

int Search(int arr[], int key, int size) {

    int low = 0;
    int high = size-1;
    while (low <= high) {
        int mid = (high+low)/2;
    
        if(arr[mid] == key)
            return mid;

        if(key < arr[mid])
            high = mid - 1;
        else
            low = mid + 1; 
    }
    return -1;         
}

int main() {

    // Take array size as a input
    cout << SIZE_MAX;
    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    // Take array element from user
    int arr[size];
    for(int i=0; i<size; i++) {
        // cout << "Element " << i+1 << ": ";
        // cin >> arr[i];
        arr[i] = i+1;
    }

    // Enter the element you need to find
    int key;
    cout << "Search Element: ";
    cin >> key;

    int loc = Search(arr, key, size);
    if(loc == -1) 
        cout << "Not Found";
    else
        cout << "Key Found at " << loc <<" position";
    return 0;
}