#include<iostream>
using namespace std;
void number1(int a) {
    int i=1;
    while (i<=a) {
        int j=1;
        while (j<=a) {
            cout<<j<<" ";
            j++;
        }
        i++;
        cout<<endl;

    }
}
void revnumber1(int a) {
    int i= 1;
    while (i<=a) {
        int j= 1;
        while (j<=a) {
            cout<< a-j+1<<" ";
            j++;
        }
        i++;
        cout<<endl;
    }
}
int main() {
    revnumber1(4);


}