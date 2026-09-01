#include<iostream>
#include<vector>
using namespace std;


// water container thing and question;
int main() {
    vector<int> height={1,8,2,6,4,8,5,1,7};
    int maxWater=0;
    for (int i =0; i<height.size(); i++) {
        for (int j=i+1; j<height.size(); j++) {
            int width= j-i;
            int hi= min(height[i], height[j]);
            int area= width*hi;
            maxWater= max(maxWater, area);
        }
    }
    cout<<maxWater;
}