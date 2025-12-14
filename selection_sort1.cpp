#include<iostream>
using namespace std;
void printArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}
void selection_sort(int arr[] , int size) {
    for (int i=0; i<size; i++) {
        int min=i;
        for (int j=i+1; j<size; j++) {
            if (arr[j]<arr[min]){
                min=j;

            }
        }
        swap(arr[min],arr[i]);
    }
}
//arrnage the order into decending order

void descSelection(int arr[], int size) {
    for (int i=0; i<size-1;i++) {
        int max= i;
        for (int j =i+1; j<size; j++) {
            if (arr[j]>arr[max]) {
                max=j;
            }
        }
        swap(arr[i],arr[max]);
    }
}
int main() {
    int arr[5]={5,9,22,1,8};
    // selection_sort(arr,5);
    descSelection(arr,5);
    printArray(arr,5);

}