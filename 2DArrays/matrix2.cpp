#include<iostream>
using namespace std;

int main() {
    int matrix[4][3]={{1,6,7},{8,9,15},{94,65,32},{88,11,22}};
    int rows=4;
    int cols=3;
    int n;
    cout<<"enter the key : "<<endl;
    cin>>n;
    bool flags=false;
    for (int i=0; i<rows; i++) {
        for (int j=0; j<cols; j++) {
            if (matrix[i][j]==n) {
                flags=true;
            }
        }
    }
    if (flags) {
        cout<<"found it";
    }
    else {
        cout<<"not found";
    }
}