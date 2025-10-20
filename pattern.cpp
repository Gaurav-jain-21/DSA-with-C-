#include<iostream>
using namespace std;
int main() {
    //make simple pattern
    cout<<"Enter the number to make a patttern ";
    int a;
    cin>>a;
    for (int i =1; i<=a; i++) {
        for (int j =1; j<=i; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    //make a deceanding order pattern
    cout<<"enter the again a number ";
    int b;
    cin>>b;
    for (int i=1; i<=b; i++) {
        for (int j=1; j<=b-i+1; j++) {
            cout<<"*";
        }
        cout<<endl;
    }
    //make a pattern with space and then stars
    cout<< "enter the number ";
    int c;
    cin>>c;
    for (int i=1;i<=c; i++) {
        for (int j=1; j<=c-i; j++) {
            cout<<" ";
        }
        for (int k=1; k<=i; k++) {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"enter the number: ";
    int d;
    cin>>d;
    for (int i=1; i<=d; i++) {
        for (int j=1;j<=i-1; j++) {
            cout<<" ";
        }
        for (int k =1; k<=d-i+1; k++) {
            cout<<"*";
        }
        cout<<endl;
    }
    cout<<"enter the number ";
    int e;
    cin>>e;
    for (int i=1;i<=e; i++) {
        for (int j=1;j<=e-i;j++) {
            cout<<" ";
        }
        for (int k=1; k<=i; k++) {
            cout<<"*";
        }
        for (int l=1; l<=i-1;l++) {
            cout<<"*";
        }
        cout<<endl;
    }

}