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
int main() {
    int arr[]={1,43,532,7654,9};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<isSorted(arr, size);
}