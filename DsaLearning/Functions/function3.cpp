#include<iostream>
using namespace std;
void sumN(int n) {
    int sum=0;
    for (int i=1; i<=n; i++) {
        sum= sum+i;
    }
    cout<<sum;
}
void sumD(int n) {
    int sum=0;
    while (n>0) {
        int d= n %10;
        sum= sum+d;
        n=n/10;
    }
    cout<<sum;
}
int fact(int n) {
    if (n==0) {
        return 1;
    }
    return n* fact(n-1);
}

void nCr(int n, int r) {
    cout<< fact(n)/(fact(r)*fact(n-r));
}


int main() {
    sumN(5);
    cout<<endl;
    sumD(34);
    cout<<endl;
    nCr(8,2);
}