#include<iostream>
using namespace std;
void printArray(int arr[] , int size) {
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}
void bubbleSort(int arr[], int size) {
    for (int i=1; i<size; i++) {
        for (int j=0;j<size-i; j++) {
            if (arr[j]>arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
// in desending order
void desBubbleSort(int arr[], int size) {
    for (int i=1; i<size; i++) {
        for (int j=0; j<size-i; j++) {
            if (arr[j]<arr[j+1]) {
                swap(arr[j],arr[j+1]);
            }
        }
    }
}
int main() {
    int arr[5]={6,3,2,8,1};
    // bubbleSort(arr, 5);
    desBubbleSort(arr,5);
    printArray(arr, 5);

}