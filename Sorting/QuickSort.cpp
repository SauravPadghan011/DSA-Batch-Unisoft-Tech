#include<iostream>
using namespace std;

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int Partition(int arr[], int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;   

    while(i<j) {
        while(arr[i] <= pivot) i++;
        while(arr[j] > pivot) j--;

        if(i < j) {
            swap(&arr[i], &arr[j]);
        }
    }

    swap(&arr[j], &arr[low]);
    for(int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }cout << endl;


    return j;
}

void QuickSort(int arr[], int low, int high) {
    if(low < high) {
        int pivot = Partition(arr, low, high);
        QuickSort(arr, low, pivot-1);  
        QuickSort(arr, pivot+1, high);
    }
}

int main() {

    // int arr[10] = {10,2,4,6,8,7,5,1,3,9};
    int arr[5] = {3,5,2,4,1};

    cout << "Before Sorting: ";
    for(int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }cout << endl;

    QuickSort(arr, 0, 9);

    cout << "After Sorting: ";
    for(int i=0; i<10; i++) {
        cout << arr[i] << " ";
    }cout << endl;




    return 0;
}