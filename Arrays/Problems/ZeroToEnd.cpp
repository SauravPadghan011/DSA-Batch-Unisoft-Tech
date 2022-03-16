#include <iostream>
using namespace std;

int main() {
    int arr[10] = {10,0,0,8,0,12,0,0,45,0};

    for(int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }

    int count = 0;
    for(int i=0; i<10; i++) {
        if(arr[i] != 0) {
            int temp = arr[i];
            arr[i] = arr[count];
            arr[count] = temp;

            count++;
        }
    }
    cout << endl;
    for(int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }




    return 0;
}