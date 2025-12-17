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
int main() {
    int arr[6]={1,2,3,4,5,6};
    revers_Inde(arr,6,3);
    printArray(arr,6);


}