#include <iostream>
using namespace std;

int main() {

    // int m=3, n=3;
    int arr[][3] = {1,2,3,4,5,6,7,8,9};
    // int arr[3][3] = {1,2,3,4,5,6,7,8,9};
    // int arr[m][n] = {
    //                     {1,2,3},
    //                     {4,5,6},
    //                     {7,8,9}
    //                 };

    // cout << "Enter Elements: " <<endl;
    // for(int i=0; i<m; i++) {
    //     for(int j=0; j<n; j++) {
    //         cin >> arr[i][j];
    //     }
    // }

    for(int i=0; i<3; i++) {
        for(int j=0; j<3; j++) {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}