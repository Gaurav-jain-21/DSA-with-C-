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
void seqnumber(int a) {
    int i=1;
    int count=1;
    while (i<=a) {
        int j=1;
        while (j<=a) {
            cout<<count<<" ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
}
void tripattern(int a) {
    int i= 1;
    int count =1;
    while (i<=a) {
        int j=1;
        while (j<=i) {
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
}
void tripattern2(int a) {
    int i=1;
    int count=1;
    while (i<=a) {
        int j=1;
        count = i;
        while (j<=i) {
            cout<<count<<" ";
            count++;
            j++;
        }
        i++;
        cout<<endl;
    }
}
int main() {
    // revnumber1(4);
    // seqnumber(3);
    tripattern2(5);


}