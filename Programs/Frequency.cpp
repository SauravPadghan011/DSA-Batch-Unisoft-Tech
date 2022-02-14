#include <iostream>
using namespace std;

int Search(int arr[], int key, int left, int right) {
    
    if(left <= right) {
        int mid = left + (right-left)/2;

        if(arr[mid] == key) {
            return mid;
        }

        if(key < arr[mid])
            return Search(arr, key, left, mid-1);
        else
            return Search(arr, key, mid+1, right);
    }
    return -1;
}


int main() {

    // int size = 13;
    // int arr[size] = {1,1,2,2,2,2,4,4,5,5,6,10,10};
    // int arr[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};

    int size = 6;
    int arr[size] = {1,1,1,2,2,3};
    
    int tempPrint = 0;
    for(int i=0; i<size; i++) {
        if(arr[i] == arr[i+1]) {
            int temp = arr[i];
            arr[i] = 0;
            int loc = Search(arr, temp, 0, size-1);
        }
    }

    cout << "After removing duplicates: ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    cout << "\n\nFrequency of each element:\n";
    int c = 0;
    for(int i=0; i<size; i++) {
        if(arr[i] == 0) {
            c++;
        } else {
            cout << arr[i] << " " << ++c << endl; 
            c = 0;
        }
    }
    return 0;
    
}