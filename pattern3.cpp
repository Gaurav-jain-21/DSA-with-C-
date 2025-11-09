#include<iostream>
using namespace std;
int main() {
    cout<<"enter the number to make pattern "<<endl;
    int a;
    cin>>a;
    for (int i=1 ; i<=a ; i++) {
        for (int j= 1 ; j<=i; j++) {
            cout<<i;
        }
        cout<<endl;
    }
    cout<<"Enter the number to make a pattern "<<endl;
    int b;
    cin>>b;
    int count= 1;
    for (int i=1; i<=b; i++) {
        for (int j= 1 ; j<=i; j++) {
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    cout<<"Enter the number to make a pattern "<<endl;
    int c;
    cin >>c;
    for (int i = 1; i<= c; i++) {
        int count = i;
        for (int j= 1 ; j<= i; j++) {
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    cout<<"Enter the number to make a patten "<<endl;
    int d; cin>>d;
    for (int i=1; i<=d; i++) {
        int count = i;
        for (int j= 1; j<= i ; j++) {
            cout<<count;
            count--;

        }
        cout<<endl;
    }
}