#include<iostream>
using namespace std;

int main() {
    int arr[]= {4,2,7,8,1,2};
    int size=6;
    int s=0;
    int e=size-1;
    while (s<e) {
        swap(arr[s],arr[e]);
        s++;
        e--;
    }

    for (int i=0; i<size; i++) {
        cout<<arr[i];
    }
}