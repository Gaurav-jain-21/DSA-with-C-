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
int main() {
    int size;
    cin>>size;
    int num[size];
    for (int i=0; i<size;i++) {D
        cin>>num[i];
    }
    cout<<"max value is "<<getMax(num,size)<<endl;
}