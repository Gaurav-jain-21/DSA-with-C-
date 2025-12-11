#include<iostream>
using namespace std;
void printArray(int arr[] , int size) {
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<"program is done"<<endl;
}
//swap alternate
void swap_alternate(int arr[], int size) {
    for (int i=0; i<size; i=i+2) {
        if (i+1<size) {
            swap(arr[i], arr[i+1]);
        }
    }
}
//find unique number from the array
int uniqueNumber(int arr[], int size) {
    int num=0;
    for (int i=0; i<size;i++) {
        num=num^arr[i];
    }
    return num;

}

int main() {
    cout <<"enter the size of an array "<<endl;
    int size;
    cin>>size;
    int arr[size];
    for (int i=0; i<size; i++) {
        cin>>arr[i];
    }
    // swap_alternate(arr,size);
    // printArray(arr, size);
    cout<<"the unique number from the array is "<<uniqueNumber(arr, size);
}