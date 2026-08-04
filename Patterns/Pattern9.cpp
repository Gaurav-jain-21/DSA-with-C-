#include<iostream>
using namespace std;
int main() {
    // int n=4;
    // for (int i=1; i<=n; i++) {
    //     char ch= 'A';
    //     for (int j=1;j<=n; j++) {
    //         cout<<ch;
    //         ch++;
    //     }
    //     cout<<endl;
    // }

    // int n=3;
    // int num=1;
    // for (int i=0;i<n;i++) {
    //     for (int j=0; j<n;j++) {
    //         cout<<num<<" ";
    //         num++;
    //     }
    //     cout<<endl;
    // }
    // int n=4;
    // for (int i=0; i<n; i++) {
    //     for (int j=0; j<i+1;j++) {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // int n=4;
    // for (int i=0;i<n;i++) {
    //     for (int j=0; j<i+1; j++) {
    //         cout<<i+1;
    //     }
    //     cout<<endl;
    // }
    // int n=4;
    // for (int i=0; i<n; i++) {
    //     for (int j=1;j<=i+1; j++) {
    //         cout<<j;
    //     }
    //     cout<<endl;
    // }
    // int n=5;
    // for (int i=1; i<=n; i++) {
    //     for (int j=1; j<=i; j++) {
    //         cout<<i-j+1;
    //     }
    //     cout<<endl;
    // }
    // int n=4;
    // int num=1;
    // for (int i=1; i<=n;i++) {
    //     for (int j=1; j<=i; j++) {
    //         cout<<num;
    //         num++;
    //     }
    //     cout<<endl;
    // }
    int n=4;
    for (int i=1; i<=n; i++) {
        for (int j=1;j<i;j++) {
            cout<<" ";
        }
        for (int k=1; k<=n-i+1;k++) {
            cout<<i;
        }
        cout<<endl;
    }
}