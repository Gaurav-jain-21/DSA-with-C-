#include<iostream>
using namespace std;
void camp(int a,int b) {
    if (a>b) {
        cout<<"a  is greater than ";
    }
    else if (a<b) {
        cout<<"b is greater than a";

    }
    else {
        cout<<"every number is equal";
    }
}

int main() {
    // char ch = 97;
    // cout<<ch;
    // int a= 2;
    // int b= a+1;
    // if ((a=3)==b) {
    //     cout<<a;
    //
    // }
    // else {
    //     cout<<a+1;
    // }
    // int a= 9;
    // if (a==9) {
    //     cout<< "Niney";
    //
    // }
    // if (a>0) {
    //     cout<<"positive";
    // }
    // else {
    //     cout<<"negative";
    // }
    // int a= 24;
    // if (a>20) {
    //     cout<<"Love";
    // }
    // else if (a==24) {
    //     cout<<"Lovely";
    // }
    // else {
    //     cout<<"babbar";
    // }
    // cout<<a;
    cout<<"enter the number to print the pattern ";
    int a;
    cin>>a;
    int i=1;
    while (i<=a) {
        int j= 1;
        while (j<=a) {
            cout<<i;
            j++;
        }
        i++;
        cout<<endl;
    }



}