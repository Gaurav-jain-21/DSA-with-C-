#include<iostream>
using namespace std;
int fibonnacci(int n) {
    if (n==0 || n==1) {
        return n;
    }
    return fibonnacci(n-1)+fibonnacci(n-2);
}
int main() {
    int i = 0;
    while (i<10) {
        cout<<fibonnacci(i);
        i++;
    }

}