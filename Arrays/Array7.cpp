#include<iostream>
#include<vector>
using namespace std;

int main() {
    vector<int> nums= {2,7,11,15};
    int target= 13;
    int i=0;
    int j= 3;
    vector<int> ans;
    while (i<j) {
        int pairSum=nums[i]+nums[j];
        if (pairSum > target) {
            j--;
        }else if (pairSum < target) {
            i++;
        }
        else {
            ans.push_back(i);
            ans.push_back(j);
            break;
        }
    }
    cout<<ans[0]<<endl;
    cout<<ans[1]<<endl;
}