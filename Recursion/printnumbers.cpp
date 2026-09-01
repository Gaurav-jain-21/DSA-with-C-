#include<iostream>
using namespace std;

void printNums(int n) {
    if (n==1) {
        cout<<"1\n";
        return;
    }
    cout<<n<<" ";
    printNums(n-1);
}
int main() {
    cout<<"print the number "<<endl;
    printNums(15);
}