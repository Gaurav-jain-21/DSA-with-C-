#include<iostream>
using namespace std;
int gcd(int a, int b) {
    if (a==0) {
        return b;
    }
    if (b==0) {
        return a;
    }
    while (a!=b) {
        if (a>b) {
            a=a-b;
        }
        else {
            b=b-a;
        }
    }
    return a;
}
int main() {
    int num1=24;
    int num2= 72;
    int gcdi=1;
    for (int i =1; i<=num1; i++) {
        if (num1%i==0 && num2%i==0) {
            gcdi=i;
        }
    }
    cout<<gcdi<<endl;

    cout<<gcd(1,5);
}