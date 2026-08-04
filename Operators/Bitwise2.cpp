#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the value of n "<<endl;
    cin>>n;
    bool flag= true;
    for (int i=2; i<n ; i++) {
        if (n%i==0) {
            flag=false;
            break;
        }
    }
    if (flag) {
        cout<<"Prime";
    }
    else {
        cout<<"Not Prime";
    }
}