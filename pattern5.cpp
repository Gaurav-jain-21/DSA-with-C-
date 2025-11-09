#include<iostream>
using namespace std;
int main() {
    cout<<"enter the number : "<<endl;
    int n;
    cin>>n;
    for (int i=1; i<= n; i++) {
        for (int  j= 1 ; j<= n-i;j++) {
            cout<<" ";
        }
        for (int k=1; k<= i; k++) {
            cout<<"*";
        }
        cout<<endl;
    }
}