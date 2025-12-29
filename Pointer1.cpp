#include<iostream>
using namespace std;
int main() {
    int num=5;
    cout<<num<<endl;
    //address of operator -&
    // cout<<"address of num is"<<&num<<endl;
    int *ptr= &num;
    cout<<*ptr<<endl;
    double d= 4.3;
    double *p2= &d;
    cout<<"Address is : "<<p2<<endl;
    cout<<*p2<<endl;
    cout<<"size of integer is : "<<sizeof(num)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"size of pointer is : "<<sizeof(p2)<<endl;
    int num1=5;
    int a= num1;
    a++;
    cout<<num<<endl;
    int *p=&num1;
    cout<<num1<<endl;
    (*p)++;
    cout<<num1<<endl;
}