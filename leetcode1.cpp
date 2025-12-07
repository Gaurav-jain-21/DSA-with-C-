#include<iostream>
using namespace std;
//revers integer
void reverse_integer(int a){
    int ans=0;
    while (a!=0) {
        int digit = a%10;
        if ((ans>INT_MAX/10)|| (ans<INT_MIN/10)) {
            cout<<0<<endl;
        }
        ans= (ans*10)+digit;
        a/=10;
    }
    cout<<ans<<endl;
}
//compliment of base 10 integer
void compliment(int n) {
    if (n==0) {
        cout<<0<<endl;
    }
    int m= n;
    int mask= 0;
    while (m!=0) {
        mask= (mask<<1)|1;
        m= m>>1;
    }
    int ans= (-n)&mask;
    cout<<ans<<endl;
}
#include<math.h>

//Power of 2
void Power(int n) {
    for (int i=0; i<=30; i++) {
        int ans= pow(2,i);
        if (ans==n) {
            cout<<true;
        }
    }
    cout<<false;
}

int main() {
    reverse_integer(-20);
    Power(16);

}
