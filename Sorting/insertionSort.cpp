#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int arr[size] = {5,11,2,4,9};

    cout << "Before Sorting: ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    } cout << endl;

    int j = 0;
    for(int i=1; i<size; i++) {
        int temp = arr[i];
        j = i - 1;

        while(j >= 0 && arr[j] > temp) {
            arr[j+1] = arr[j];
            j -= 1;
        }
        arr[j+1] = temp;
        /*
        Just to check How shifting is happening
        cout << "Shifting: ";
        for(int i=0; i<5; i++) {
            cout << arr[i] << " ";
        } cout << endl;
        */
    }

    cout << "After Sorting: ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}