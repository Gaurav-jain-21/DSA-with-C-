#include<iostream>
using namespace std;
int main() {
    int arr[5]= {3,2,7,4,1};
    int n=5;
    for (int i=0; i<n-1; i++) {
        int minIndex=i;
        for (int j=i+1; j<n; j++) {
            if (arr[minIndex]>arr[j]) {
                minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}