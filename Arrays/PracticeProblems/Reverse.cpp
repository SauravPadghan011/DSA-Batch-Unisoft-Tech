#include<iostream>
using namespace std;

int main() {

    int size = 10;
    int arr[size] = {1,2,3,4,5,6,7,8,9,10};

    cout << "Original: ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    int start = 0;
    int end = size-1;
    while(start <= end) {
        int temp = arr[end];
        arr[end] = arr[start];
        arr[start] = temp;

        start++;
        end--;
    }

    cout << endl << "Reversed: ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}