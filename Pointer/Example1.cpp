#include<iostream>
using namespace std;
int main() {
    int arr[10]={2,5,6};
    cout <<"address of the first memory block: "<<arr<<endl;
    cout<<"address of the arr is "<<&arr[0]<<endl;
    cout<<"4th is "<<*arr<<endl;
    cout<<"4th is "<<*arr+1<<endl;
    int i=2;
    cout<<i[arr]<<endl;
    return 0;
}