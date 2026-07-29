#include<iostream>
using namespace std;
int main() {
    cout<<"Enter the number "<<endl;
    int n;
    cin>>n;
    int i=1;
    while (i<=n) {
        int j=1;
        int k= 1;
        while (j<=n-i) {
            cout<< " ";
            j++;
        }
        while (k<=i) {
            cout<<"*";
            k++;
        }
        cout<<endl;
        i++;
    }
}