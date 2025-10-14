#include<iostream>
using namespace std;
int main() {
    cout<<"enter the number ";
    int n;
    cin>>n;
    bool flag= true;
    for (int i =2; i<n; i++) {
        if (n%i==0) {
            flag= false;
            break;
        }
    }
    if (flag== true) {
        cout<<"yes";
    }
    else {
        cout<<"no";
    }
}