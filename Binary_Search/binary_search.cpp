#include<iostream>
using namespace std;
int binarySearch(int arr[],int size, int key) {
    int low=0;
    int high =size-1;
    while (low<=high) {
        int mid= (low +high)/2;
        if (arr[mid]==key) {
            return mid;
        }
        else if (arr[mid]>key) {
            high = mid-1;
        }
        else {
            low = mid+1;
        }

    }
    return -1;
}

int BinarySearch(int arr[], int size, int key) {
    int start=0;
    int end= size-1;
    int mid=(start+end)/2;
    while (start<=end) {
        if (arr[mid]==key) {
            return mid;


        }
        else if (key>arr[mid]) {
            start= mid+1;
        }
        else {
            end= mid-1;
        }
        mid= (start+end)/2;
    }
    return -1;
}
int main() {
    int arr[]={1,2,4,5,6,8,9};
    int n= sizeof(arr)/sizeof(arr[0]);
    cout<<BinarySearch(arr,n,4);
}