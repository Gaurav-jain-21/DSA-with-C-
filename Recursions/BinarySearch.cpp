#include<iostream>
using namespace std;
bool isSorted(int arr[] , int size) {
    if (size==1 || size==0) {
        return true;
    }
    if (arr[0]>arr[1]) {
        return false;
    }
    else {
        bool ans= isSorted(arr+1, size-1);
        return ans;
    }

}
int arrSum(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    return arr[0] + arrSum(arr + 1, size - 1);
}

bool LinearSearch(int arr[],int key, int size) {
    if (size==0) {
        return false;
    }
    if (arr[0]==key) {
        return true;
    }
    else {
        bool ans= LinearSearch(arr+1,key,size-1);
        return ans;
    }
}
int main() {
    int arr[]={1,43,532,7654,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<isSorted(arr, size)<<endl;
    cout<<arrSum(arr,size)<<endl;
    cout<<LinearSearch(arr,53,size);

}