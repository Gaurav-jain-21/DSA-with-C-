#include<iostream>
#include<vector>
using namespace std;

int main() {

    vector<int> arr= {3,3,7,7,10,11,11};
    int s= 0;
    int end= arr.size() -1;
    while (s<=end) {
        int mid= s+(end-s)/2;
        if (arr[mid]!=arr[mid-1] && arr[mid]!= arr[mid+1]) {
            cout<<mid;
            break;
        }
        else if (arr[mid]==arr[mid-1]) {
            end= mid;
        }
        else {
            s= mid;
        }
    }
}