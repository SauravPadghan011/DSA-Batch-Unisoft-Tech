#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int size = 10;
    int arr[size] = {10, 45, 10, 87, 45, 42, 87, 45, 42, 57}; 
    unordered_set<int> set;
    // set.insert(10);
    // set.insert(12);
    // set.insert(35);
    // set.insert(45);
    // set.insert(68);

    for(int i=0; i<size; i++) {
        set.insert(arr[i]);
    }

    // if(set.find(12) == set.end()) {
    //     cout << "Not Found" << endl;
    // } else {
    //     cout << "Found" << endl;
    // }

    if(set.count(45) == 0) {
        cout << "Not Found" << endl;
    } else {
        cout << "Found" << endl;
    }

    for(auto itr = set.begin(); itr != set.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;

    cout << "Distinct Elements are: " << set.size();
    return 0;
}