#include<iostream>
using namespace std;

int bs(int arr[], int tar, int st, int end) {
    int mid = st +(end-st)/2;
    if (arr[mid]==tar) {
        return mid;
    }
    else if (arr[mid]>tar) {
        return bs(arr,tar,st,mid-1);
    }
    else {
        return bs(arr,tar,mid+1,end);
    }
}