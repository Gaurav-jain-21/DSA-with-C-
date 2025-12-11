#include<iostream>
using namespace std;
void printArray(int arr[], int size) {
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";

    }
    cout<<"printing done"<<endl;
}

int getMax(int num[], int size) {
    int max= num[0];
    for (int i=0; i<size; i++) {
        if (max<num[i]) {
            max=  num[i];
        }
    }
    return max;
}
bool search(int arr[] ,int size,int key) {
    for (int i =0; i<size; i++) {
        if (arr[i]==key) {
            return true;
        }
    }
    return false;
}
void reverse_array(int arr[] , int size) {
    int start= 0;
    int end= size-1;
    while (start<end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }

}
int main() {
    int size;
    cin>>size;
    int num[size];
    for (int i=0; i<size;i++) {
        cin>>num[i];
    }
    // int key;
    //
    // cout<<"enter the keyy "<< endl;
    // cin>>key;
    // cout<<"result"<<" "<<search(num,size,key)<<endl;
    // cout<<"max value is "<<getMax(num,size)<<endl;
    reverse_array(num,size);
    printArray(num, size);
}