#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> vec={1,2,3};
    cout<<vec[0];
    cout<<endl;
    vector<int> vea(3,0);
    for (int i: vea) {
        cout<<i;
    }
    cout<<endl;
    cout<<vea.size();
    cout<<endl;

}