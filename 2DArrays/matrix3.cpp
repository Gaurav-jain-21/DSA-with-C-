#include<iostream>
using namespace std;

int main() {
    int matrix[3][3]={{1,2,3},{20,5,10},{7,8,9}};
    int n=3;
    int maxNum=INT_MIN;
    for (int i=0; i<n;i++) {
        int num=0;
        for (int j=0; j<n; j++) {
            num+=matrix[i][j];
        }
        maxNum=max(num,maxNum);
    }
    cout<<maxNum;
}