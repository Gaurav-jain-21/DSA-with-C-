#include<iostream>
using namespace std;
int main() {
    cout<<"Enter any number : ";
    int c;
    cin>>c;
    for (int i=1; i<=c; i++) {
        for (int j=1; j<=i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }

}