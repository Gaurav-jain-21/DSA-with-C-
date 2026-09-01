#include<iostream>
#include<vector>
using namespace std;


void printAllSubsets(vector<int> &arr,vector<int> &ans, int i) {
    if (i==arr.size()) {
        for (int val: ans) {
            cout<<val<<" ";

        }
        cout<<endl;
        return;
    }
    ans.push_back(arr[i]);
    printAllSubsets(arr, ans,i+1);
    ans.pop_back();
    printAllSubsets(arr, ans, i+1);
}
int main() {

    vector<int> arr={1,2,2};
    vector<int> ans;
    printAllSubsets(arr,ans,0);

}