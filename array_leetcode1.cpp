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
int main() {
    int arr[6]={1,2,3,4,5,6};
    reverse_array(arr,6);
    printArray(arr,6);


}