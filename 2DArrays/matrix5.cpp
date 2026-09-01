#include<iostream>
#include <unordered_map>
using namespace std;
#include<vector>
vector<int> twoSum(vector<int>& arr, int tar) {
    unordered_map<int, int> m;
    vector<int>ans;
    for (int i=0;i<arr.size(); i++) {
        int first = arr[i];
        int sec= tar - first;

        if (m.find(sec) != m.end()) {
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[first]=i;
    }
    return ans;
}
vector<int> findMe(vector<vector<int>>& grid) {
    vector<int> ans;
    unordered_map<int, int> s;
    int n= grid.size();
    int a,b;
    for (int i=0; i<n; i++) {
        for (int j=0; j<n; j++) {
            if (s.find(grid[i][j])!=s.end()) {
                a = grid[i][j];
                ans.push_back(a);
                break;
            }
            s.insert(grid[i][j]);
        }
    }
}
int main() {

}