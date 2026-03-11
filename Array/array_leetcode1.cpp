#include<iostream>
using namespace std;
void printArray(int arr[] , int size) {
    for (int i=0; i<size; i++) {
        cout<< arr[i] << " ";
    }
}
//reverse an array
void reverse_array(int arr[] ,int size) {
    int s=0;
    int end= size-1;
    while (s<end) {
        swap(arr[s],arr[end]);
        s++;
        end--;
    }
}
//reverse array after any index value
void revers_Inde(int arr[], int size, int index) {
    int s=index;
    int end= size-1;
    while (s<end) {
        swap(arr[s], arr[end]);
        s++;
        end--;
    }
}
//Merge sorted array
void merge(int arr1[], int n, int arr2[], int m,int arr3[]) {
    int i=0, j=0;
    int k=0;
    while (i<n&& j<m) {
        if (arr1[i]<arr2[j]) {
            arr3[k]=arr1[i];
            i++;
            k++;
        }
        else {
            arr3[k]=arr2[j];
            j++;
            k++;
        }
    }
    while (i<n) {
        arr3[k]=arr1[i];
        k++;
        i++;
    }
    while (j<m) {
        arr3[k]=arr2[j];
        k++;
        j++;
    }
}
//Move Zeros
void move_zero(int arr[], int s) {
    int i=0;
    for (int j= 0; j<s; j++) {
        if (arr[j]!=0) {
            swap(arr[j], arr[i]);
            i++;
        }
    }
}
int main() {
    int arr[5]={2,0,7,1,0};
    move_zero(arr,5);
    printArray(arr,5);


}