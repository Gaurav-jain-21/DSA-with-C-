#include<iostream>
#include<vector>
using namespace std;

int areaWater(vector<int> height) {
    int maxWater=0;
    int lp=0, rp=height.size()-1;
    while (lp<rp) {
        int width= rp-lp;
        int h= min(height[lp], height[rp]);
        int area= width * h;
        maxWater= max(maxWater, area);
        if (height[lp]<height[rp]) {
            lp++;
        }
        else {
            rp--;
        }
    }
    return maxWater;
}

int main() {
    vector<int> height={1,8,2,6,4,8,5,1,7};
    int i=0;
    int j=height.size()-1;
    int maxSize=0;
    while (i<j) {
        int w= j-i;
        int h=min(height[i], height[j]);
        int area= w*h;
        maxSize= max(maxSize,area);

        if (height[i]<height[j]) {
            i++;
        }
        else {
            j--;
        }
    }
    cout<<maxSize<<endl;
    cout<<areaWater(height);
}