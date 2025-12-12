#include<iostream>
#include <vector>
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
//find the duplicate number in array
int duplicate(int arr[], int size) {
    int ans=0;
    for (int i=0; i<size; i++) {
        ans=ans^arr[i];
    }
    for (int i=1; i<size; i++) {
        ans= ans^ i;
    }
    return ans;
}
//find the interception between two arrays
vector<int> interception(int arr1[], int arr2[], int m, int n) {
    vector<int> ans;
    for (int i=0; i<m; i++) {
        int element= arr1[i];
        for (int j=0; j<n; j++) {
            if (element==arr2[j]) {
                ans.push_back(element);
                arr2[j]=INT_MIN;
                break;

            }
        }
    }
    return ans;
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