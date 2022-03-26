#include <iostream>
using namespace std;

int main() {

    int size = 5;
    int arr[size];

    for(int i=0; i<size; i++) {
        int num;
        cin >> num;
        int idx = num%size;
        arr[idx] = num;
    }


    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    int key = 52;
    if(arr[key%size] == key) {
        cout << "Found";
    } else {
        cout << "Not Found";
    }



    return 0;
}