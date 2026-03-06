#include<iostream>
#include<vector>
using namespace std;
int main() {
    cout<<"Enter number to secarch";
    int target;
    cin>>target;
    vector<vector<int>> arr = {
        {1,3,5,7},
        {10,11,16,20},
        {23,30,34,60}
    };
    int row= arr.size();
    int col= arr[0].size();
    int start=0;
    int end = row*col-1;
    int mid=start+(end-start)/2;
    while (start<=end) {
        int element= arr[mid/col][mid%col];
        if (element==target) {
            cout<< 1;
        }
        if (element<target) {
            start=mid+1;
        }
        else {
            end= mid-1;
        }
        mid= start+(end-start)/2;
    }
    return 0;

}