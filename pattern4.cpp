#include<iostream>
using namespace std;
int main() {
    cout<<"enter the number to make a word kind pattern "<<endl;
    int a;
    cin>>a;
    for (int i = 1 ; i<= a; i++) {
        for (int j= 1; j<=a; j++) {
            char ch='A'+i-1;
            cout<<ch;
        }
        cout<<endl;
    }
    cout<<"Enter the number to make a word pattern"<<endl;
    int b;
    cin>>b;
    for (int i= 1; i<=b; i++) {
        for (int j= 1; j<=b; j++) {
            char ch= 'A'+ j -1;
            cout<<ch;
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"enter the number "<<endl;
    int c;
    cin>>c;
    for (int i= 1; i<=c; i++) {
        for (int j= 1; j<=c; j++) {
            char  ch = 'A' + i+ j-2;
            cout<<ch;
        }
        cout<<endl;
    }

}