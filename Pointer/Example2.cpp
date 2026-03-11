#include<iostream>
using namespace std;
int& func(int a) {
    int num= a;
    int& ans= num;
    return ans;
}
int* fun(int n) {
    int* ptr=&n;
    return ptr;
}
void update1(int& n) {
    n++;
}
void update2(int n) {
    n++;
}
int main() {
    cout<<fun(5)<<endl;
}