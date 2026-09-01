#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums={4,1,2,1,2};
    int n= 0;
    for (int i =0; i<nums.size(); i++) {
        n= n^nums[i];
    }
    cout<<n;
}