#include <iostream>
using namespace std;

int main() {

    int size;
    cout << "Enter the size of Array: ";
    cin >> size;

    int arr[size];
    for(int i=0; i<size; i++) {
        cout << "Element " << i+1 << ": ";
        cin >> arr[i];
    }

    cout << "Array elements are: ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}