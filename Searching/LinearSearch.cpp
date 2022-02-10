#include <iostream>
using namespace std;

int main() {

    int size;
    cout << "Enter Size: ";
    cin >> size;

    int arr[size];
    cout << "\nElemnts: ";
    for(int i=0; i<size; i++) {
        cin >> arr[i];
    }

    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }    

    cout << "Search Key: ";
    int searchKey;
    cin >> searchKey;

    bool flag = false;
    for(int i=0; i<size; i++) {
        if(arr[i] == searchKey) {
            flag = true;
            cout << "Element " << searchKey << " is Found at " << i;
        }
    }

    if(flag == false) cout << "Key Not Found"; 

    return 0;
}