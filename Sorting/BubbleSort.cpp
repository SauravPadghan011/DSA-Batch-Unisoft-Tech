#include <iostream>
using namespace std;


int main() {

    int size = 5;
    int arr[size] = {5,4,3,2,1};

    cout << "Before Swapping: ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    } cout << endl;


    for(int i=0; i<size-1; i++) {
        for(int j=0; j<size-i-1; j++) {
            if(arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
            cout << "Swapping Performed: ";
        for(int i=0; i<size; i++) {
            cout << arr[i] << " ";
        } cout << endl;
        }
    }

    cout << "After Swapping: ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }



    return 0;
}