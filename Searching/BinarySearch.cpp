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

    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    int size = 9;

    for(int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }

    int key;
    cout <<endl<< "Key: ";
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