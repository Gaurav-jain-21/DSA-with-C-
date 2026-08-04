#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the number ";
    cin>>n;
    int sum=0;
    while (n!=0) {
        sum= sum*10+n%10;
        n= n/10;
    }
    
    cout<<sum;
}