#include <iostream>
using namespace std;

int main() {
    int size = 10;
    int arr[size] = {5,4,3,2,1,7,8,9,10,6};

    cout << "Before Sorting: ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    } cout << endl;


    for(int i=0; i<size; i++) {
        int min = i;
        for(int j=i+1; j<size; j++) {
            if(arr[j] < arr[min]) {
                min = j;
            }
        }

        int temp = arr[i];
        arr[i] = arr[min];
        arr[min] = temp;
    } 

    cout << "After Sorting: ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}