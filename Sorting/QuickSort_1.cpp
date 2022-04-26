#include<iostream>
using namespace std;

void swap(int *num1, int *num2) {
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

int Partition(int arr[], int left, int right){
    int i = left;
    int j = right;
    int pivot = arr[left];

    while(i<j) {
        while(arr[i] <= pivot) {
            i++;
        }
        while(arr[j] > pivot)
            j--;
        if(i < j) 
            swap(&arr[i], &arr[j]);    
    }
    swap(arr[j], arr[left]);

    return j;
}

void QuickSort(int arr[], int size, int left, int right) {
    if(left < right) {
        int pivot = Partition(arr, left, right);
        QuickSort(arr, size, left, pivot-1);
        QuickSort(arr, size, pivot+1, right);
    }
}

int main() {

    int size = 10;
    int arr[size] = {10,2,4,6,8,7,5,1,3,9};

    cout<<"Before Sorting: ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }cout<<endl;

    QuickSort(arr, size, 0, size-1);

    cout<<"After Sorting: ";
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}