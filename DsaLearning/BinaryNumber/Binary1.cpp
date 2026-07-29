#include<iostream>
using namespace std;

int decToBinary(int num) {
    int ans=0;
    int pow=1;
    while (num>0) {
        int rem= num%2;
        num= num/2;
        ans +=(rem *pow);
        pow= pow*10;
    }
    return ans;
}

int binToDecimel(int n) {
    int ans=0;
    int pow=1;
    while (n>0) {
        int rem= n%10;
        n= n/10;
        ans +=(rem*pow);
        pow *= 2;
    }
    return ans;
}

int main() {
    int decNum=50;
    cout<<decToBinary(decNum)<<endl;

    int n=110010;
    cout<<binToDecimel(n);
}