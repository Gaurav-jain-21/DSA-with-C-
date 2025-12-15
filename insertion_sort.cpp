#include<iostream>
using namespace std;
void printArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
}
//insertion sort
void insertionSort(int arr[],int size) {
    for (int i=1; i<size; i++) {
        int temp=arr[i];
        int j= i-1;
        for (; j>=0; j--) {

            if (arr[j]>temp) {
                arr[j+1]=arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1]=temp;
    }
}
int main() {
    cout<<"hello world"<<endl;
}