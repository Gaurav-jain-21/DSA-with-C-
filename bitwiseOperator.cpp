#include<iostream>
using namespace std;
int main() {
    cout<<"find the sum of number from 1 to n"<<endl;
    cout<<"enter the number ";
    int n;
    cin>>n;
    int sum= 0;
    for (int i= 1; i<=n ; i++) {
        sum= sum+i;

    }
    cout<<"the sum of the all number is " <<sum<<endl;

    cout<<"enter the limit for the Fibonacci series : ";
    int lim;
    cin>>lim;
    int a= 0;
    int b= 1;
    for (int i= 1 ; i<=lim;i++) {
        int newnumber = a+b;
        cout<<newnumber<<" ";
        a=b;
        b= newnumber;
    }
    cout<<endl;

    cout<<"Enter the number to check weather the number is prime or not :";
    int x;
    cin>>x;
    bool flag= false;
    for (int i = 2; i<x; i++) {
        if (x%i==0) {
            flag= true;
            break;
        }
    }
    if (flag==true) {
        cout<<"no";
    }
    else {
        cout<<"yes";
    }


}