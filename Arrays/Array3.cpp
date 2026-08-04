#include<iostream>
using namespace std;

int linearSearch(int arr[], int key , int size) {
    for (int i=0; i<size; i++) {
        if (arr[i]==key) {
            return i;
        }
    }
    return -1;
}

int main() {

    int arr[]= {4,2,6,7,11};
    cout<<linearSearch(arr,11,5);

}