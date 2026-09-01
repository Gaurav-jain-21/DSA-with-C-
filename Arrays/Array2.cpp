#include<iostream>
using namespace std;

int main() {
    int num[]={99,23,53,7,57};
    int size=5;
    int smallest= INT_MAX;
    for (int i=0; i<size; i++) {
        if (smallest>num[i]) {
            smallest=num[i];
        }
    }
    cout<<smallest<<endl;
}