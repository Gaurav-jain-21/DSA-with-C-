#include<iostream>
using namespace std;
int countDistincWay(long long nStairs) {
    if (nStairs<0) {
        return 0;
    }
    if (nStairs==0) {
        return 1;
    }
    int ans=countDistincWay(nStairs-1)+countDistincWay(nStairs-2);
    return ans;
}
int main() {
    cout<<countDistincWay(5)<<endl;

}