#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;
    int a =0;
    int b=1;
    for (int i=1; i<=n; i++) {
        int nextNumber= a+b;
        cout<<nextNumber<<endl;
        a=b;
        b=nextNumber;
    }
}