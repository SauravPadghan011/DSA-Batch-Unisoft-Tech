#include<iostream>
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

    int size = 10;
    int arr[size] = {6,7,8,9,10,1,2,3,4,5};

    int key;
    cout << "Key: ";
    cin >> key;

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    } 

    int l1, h1, l2, h2;
    
    for(int i=1; i<size; i++) {
        if(arr[i] < arr[i-1]) {
            l1 = 0;
            h1 = i-1;
        }
    }
    // cout << endl << l1 << " " << h1 << endl;
    l2 = h1+1;
    h2 = size-1;

    int result = Search(arr, key, l1, h1);
    
    cout << endl;
    if(result != -1) {
        cout << "Key Found at: " << result;
    } else {
        int temp = Search(arr, key, l2, h2);
        if(temp != -1) 
            cout << "Key Found at: " << temp;
    }

    return 0;
}