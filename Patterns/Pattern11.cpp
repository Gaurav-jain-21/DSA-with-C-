#include<iostream>
using namespace std;
int main() {
    int n=4;
    for (int i=0; i<n; i++) {
        //spaces
        for (int j=0;j<n-i;j++) {
            cout<<" ";
        }
        cout<<"*";
        if (i!=0) {
            for (int m=0;m<2*i-1;m++) {
                cout<<" ";
            }
            //spaces
            cout<<"*";
        }
        cout<<endl;
    }
    for (int p=0; p<(n-1);p++) {
        for (int q=0;q<=p+1;q++) {
            cout<<" ";
        }
        cout<<"*";
        if (p!=n-2) {
            for (int r=0; r<2*(n-p)-5;r++) {
                cout<<" ";
            }
            cout<<"*";
        }

        cout<<endl;
    }
}