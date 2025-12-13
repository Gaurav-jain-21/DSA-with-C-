#include <iostream>
using namespace std;
int firstocc(int arr[] , int size , int key) {
    int s=0;
    int e= size-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while (s<=e) {
        if (arr[mid]==key) {
            ans=mid;
            e= mid-1;
        }
        else if (arr[mid]<key) {
            s= mid+1;

        }
        else {
            e= mid-1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
}
int lastocc(int arr[], int size, int key) {
    int s=0;
    int e= size-1;
    int ans= -1;
    int mid= s+(e-s)/2;
    while (s<=e) {
        if (arr[mid]==key) {
            ans= mid;
            s= mid+1;
        }
        else if (arr[mid]<key) {
            s= mid+1;
        }
        else {
            e= mid-1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
}
int PeakIndex(int arr[] , int size) {
    int s=0;
    int e= size-1;
    int mid= s+(e-s)/2;
    while (s<e) {
        if (arr[mid]<arr[mid+1]) {
            s= mid+1;
        }
        else {
            e= mid;
        }
        mid=s+(e-s)/2;

    }
    return s;
}


//find the pivot element in the array
int pivot(int arr[], int size) {
    int s=0;
    int e= size -1;
    int mid= s+(e-s)/2;
    while (s<e) {
        if (arr[mid]>=arr[0]) {
            s= mid+1;
        }
        else {
            e= mid;
        }
        mid= s+(e-s)/2;
    }
    return s;
}
int main() {
    // int arr[7]= {1,2,3,4,4,4,8};
    // cout<<firstocc(arr, 7,4)<<endl;
    // cout<<lastocc(arr, 7,4);
    int arr[7]={7,8,9,1,2,3,4};
    cout<<pivot(arr,7);
}