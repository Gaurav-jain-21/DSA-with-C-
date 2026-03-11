#include<iostream>
using namespace std;
//find the first and last occurance in the list
int firstOcc(int arr[] , int size, int key) {
    int s=0;
    int  e= size-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while (s<=e) {
        if (arr[mid]==key) {
            ans= mid;
            e= mid-1;
        }
        else if (key>arr[mid]) {
            s= mid+1;
        }
        else {
            e=mid-1;
        }
        mid= s+(e-s)/2;
    }
    return ans;
}
//peak index in a mountain array
int peakEle(int arr[] , int size) {
    int s=0;
    int e= size-1;
    int mid= s+(e-s)/2;
    int ans=-1;
    while (s<=e) {
        if (arr[mid]<arr[mid+1]) {
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
    int even[5]={1,2,3,3,5};
    cout<<"first occ: "<<firstOcc(even,5 ,3);
}