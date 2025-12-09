#include<iostream>
using namespace std;
void switchcase() {
    int a, b;
    cout<<"Enter the value of a "<<endl;
    cin>>a;
    cout<<"Enter the value of b "<<endl;
    cin>>b;
    char op;
    cout<<"Enter the operation you want to perform"<<endl;
    cin>>op;
    switch (op) {
        case '+': cout<< (a+b)<<endl;
            break;
        case '-': cout<<(a-b)<<endl;
            break;
        case '*':cout<<(a*b)<<endl;
            break;
        case '/': cout<<(a/b)<<endl;
            break;
        default : cout<<"Error"<<endl;
    }
}
int main() {
    switchcase();

}