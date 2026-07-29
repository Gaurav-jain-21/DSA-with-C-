#include<iostream>
using namespace std;
int power(int a, int b) {
    int sum=1;
    for (int i = 1; i<=b;i++) {
        sum = sum * a;
    }
    return sum;
}

bool isEven(int a) {
    if (a&1) {
        return 0;
    }
    return 1;
}
int main() {
    cout<<power(2,3)<<endl;
    cout<<isEven(5);
}