#include<iostream>
#include<string>
using namespace std;

int main() {
    string str="apna college";
    cout<<str<<endl;
    str= "hello";
    cout<<str<<endl;

    string str1= "gourav";
    string str2= "jain";
    string str3= str1 +" "+ str2;
    cout<<str3;
    cout<<endl;
    string str4;
    getline(cin,str4);
    cout<<"name is "<<str4<<endl;
}