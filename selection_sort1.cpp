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
int main() {
    int arr[5]={5,9,22,1,8};
    selection_sort(arr,5);
    printArray(arr,5);

}