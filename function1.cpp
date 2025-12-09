#include<iostream>
using namespace std;
void switchcase() {
    int a, b;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    char op;
    cout<<"Enter the operation you want to perform"<<endl;
    cin>>op;
    switch (op) {
        case '+': cout<< (a+b)<<endl;
            break;
        case '-': cout<<(a-b)<<endl;
            break;
        case '*':cout<<(a*b)<<endl;
            break;
        case '/': cout<<(a/b)<<endl;
            break;
        default : cout<<"Error"<<endl;
    }
}
int power(int a, int b) {
    int ans= 1;
    for (int i =1;i<=b; i++) {
        ans= ans*a;
    }
    return ans;
}
bool isEven(int a) {
    if (a&1) {
        return 0;
    }
    return 1;
}
int factorial(int a) {
    int ans=1;
    for (int i= 1; i<=a ; i++) {
        ans= ans*i;
    }
    return ans;
}
int nCr(int n, int r) {
    int ans=((factorial(n)/(factorial(r)*factorial(n-r))));
    return ans;
}
bool isPrime(int n) {
    for (int i=2 ; i<n; i++) {
        if (n%i==0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    cout<<isPrime(11);
}