#include<iostream>
using namespace std;
int searchLeft(int arr[], int size, int key) {
    int s=0;
    int e=size-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while (s<=e) {
        if (arr[mid]==key) {
            ans= mid;
            e=mid-1;
        }
        else if (key> arr[mid]) {
            s=mid+1;
        }
        else {
            e= mid-1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int searchRight(int arr[], int size, int key) {
    int s=0;
    int e= size-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while (s<=e) {
        if (arr[mid]==key) {
            ans=mid;
            s=mid +1;
        }
        else if (key< arr[mid]) {
            e= mid-1;
        }
        else {
            s= mid +1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
}
int main() {
    int arr[6]={1,2,5,5,5,3};
    cout<<searchLeft(arr,6,5);
    cout<<searchRight(arr,6,5);
}