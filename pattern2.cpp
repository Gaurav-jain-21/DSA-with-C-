#include<iostream>
using namespace std;
int main() {
    cout<<"Enter the number to make a pattern "<<endl;
    int a;
    cin>>a;
    for (int i = 1 ; i<=a; i++) {
        for (int j= 1; j<=a ; j++) {
            cout<<j;
        }
        cout<<endl;

    }
    cout<<"enter the number to make a pattern "<<endl;
    int b;

    cin >>b;
    int count= 1;

    for (int i= 1; i<=b; i++) {
        for (int j= 1; j<=b; j++) {
            cout<<count;
            count++;
        }
        cout<<endl;
    }
    cout<<"enter the number to make a star pattern "<<endl;
    int c;
    cin>>c;
    int i=1;
    while (i<=c) {
        int j= 1;
        while (j<=i) {
            cout<<"*";
            j++;
        }
        i++;
        cout<<endl;
    }

}

