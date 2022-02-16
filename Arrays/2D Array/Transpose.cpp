#include<iostream>
using namespace std;

int main() {

    int arr[3][3] = {10,20,30,40,50,60,70,80,90};
     
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            if(i<j) {
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
    }

    cout << endl << "Array Elements: " <<endl;
    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}