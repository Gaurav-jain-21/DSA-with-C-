#include<iostream>
#include<array>
#include<vector>
using namespace std;
int main() {
    int basic[3]={1,2,3};
    array<int,3>arr={4,5,6};
    int size= arr.size();
    for (int i=0; i<size; i++) {
        cout<<arr[i]<<" ";
    }

    cout<<"Element at 2nd Index: "<<arr.at(2)<<endl;
    cout<<"empty or not "<<arr.empty()<<endl;
    cout<<"first element"<<arr.front()<<endl;
    cout<<"last element"<<arr.back()<<endl;

    //vectors
    vector<int>v;
    cout<<"size"<<v.capacity()<<endl;
    v.push_back(1);
    cout<<"size"<<v.capacity()<<endl;

}