#include<iostream>
using namespace std;
void subsum(int a) {
    int product = 1;
    int sum= 0;
    while (a>0) {
        product*= a%10;
        sum+=a%10;
        a= a/10;
    }
    cout<<product- sum<<endl;
}
void numberbit(int a) {
    int count=0 ;
    while (a!=0) {
        //checking last bit
        if (a&1) {
            count++;

        }
        a=a>1;
    }
    cout<<count<<endl;

}
#include<math.h>
void convertbin(int a) {
    int i=0;
    int ans=0;
    while (a!=0) {
        int digit= a%10;
        if (digit==1) {
            ans= ans+pow(2,i);
        }
        a= a/10;
        i++;
    }
    cout<<ans<<endl;
}
int main() {
    subsum(12345);
    numberbit(7);
    convertbin(111);
}