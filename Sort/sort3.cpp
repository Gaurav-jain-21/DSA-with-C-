#include<iostream>
using namespace std;
int main() {
    int arr[6]={3,2,1,7,0,5};
    int n=6;
    for (int i=1; i<n; i++) {
        int temp=arr[i];
        for (int j=i-1; j>=0; j--) {
            if (arr[j]>temp) {
                arr[j+1]=arr[j];
            }
            else {
                break;
            }
        }
    }
}