#include<iostream>
using namespace std;
int main() {
    int arr[10]={2,5,6};

    cout<<"Address of first memory block is "<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"Address of first memory block is "<<&arr[0]<<endl;
    cout<<"4th "<<*arr<<endl;
    cout<<"5th "<<*arr+1<<endl;
    cout<<*(arr+1)<<endl;
    cout<<*(arr)+1<<endl;
    int arr2[10]={23,122,41,67};
    cout<<"8th "<<arr2[2]<<endl;
    cout<<*(arr2+2)<<endl;
}