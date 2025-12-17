#include<iostream>
#include<array>
using namespace std;
int main() {
    int basic[3]={1,2,3};
    array<int,3>arr={4,5,6};
    int size= arr.size();
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<"Element at 2nd Index: "<<arr.at(2)<<endl;
}