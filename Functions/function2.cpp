#include<iostream>
using namespace std;
int factorial(int n) {
    int ans=1;
    for (int i=1; i<=n; i++) {
        ans= ans*i;
    }
    return ans;
}
int nCr(int n, int r) {
    int num= factorial(n);
    int den= factorial(r) * factorial(n-r);
    int ans=num/den;
    return ans;

}
int main() {

    cout<<nCr(8,2)<<endl;
}