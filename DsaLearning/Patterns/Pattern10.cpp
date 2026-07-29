#include<iostream>
using namespace std;
int main() {
    int n=4;
    for (int i =1;i<=n;i++) {
        for (int j=1; j<=n-i;j++) {
            cout<<" ";
        }
        for (int k=1; k<=i;k++) {
            cout<<k;
        }
        for (int m=1; m<i;m++) {
            cout<<i-m;
        }
        cout<<endl;
    }
}