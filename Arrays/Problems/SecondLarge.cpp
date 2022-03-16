#include <iostream>
using namespace std;

int main() {

    // int arr[5] = {5,8,12,22,25};     // Passed
    // int arr[5] = {5,8,12,12,12};     // Passed
    // int arr[5] = {12,12,12,12,8};    // Passed
    // int arr[5] = {12,8,12,7,5};      // Passed
    int arr[5] = {12,8,12,7,9};      // Passed


    int largest = 0;
    int secondL = -1;
    for(int i=0; i<5; i++) {
        if(arr[i] > arr[largest]) {
            secondL = largest;
            largest = i;
        } else if(arr[i] < arr[largest]) {
            if(secondL == -1 || arr[i] > arr[secondL]) {
                secondL = i;
            }
        }
    }

    cout << "Second Largest is: " << arr[secondL] << " and Largest is: " << arr[largest];

    return 0;
}