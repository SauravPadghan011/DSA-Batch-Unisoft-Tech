#include <iostream>
using namespace std;

int main () {

    // int arr[5] = {1,5,3,8,12};
    int arr[6] = {1,5,3,1,2,8};

    int profit = 0;
    for(int i=1; i<6; i++) {
        if(arr[i] > arr[i-1]) {
            profit += (arr[i] - arr[i-1]);
        }
    }

    cout << "Profit is " << profit;



    return 0;
}