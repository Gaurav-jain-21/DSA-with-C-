#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<vector<int>> arr;
    vector<int> ans;
    int row= arr.size();
    int col= arr[0].size();
    int count=0;
    int total=row*col;
    int startingRow=0;
    int startingCol=0;
    int endingRow= row-1;
    int endingCol=col-1;
    while (count<total) {
        //print Starting row
        for (int i = startingCol; count<total && i<=endingCol; i++) {
            ans.push_back(arr[startingRow][i]);
            count++;
        }
        startingRow++;
        //print Ending Column
        for (int i= startingRow; count<total && i<=endingRow; i++) {
            ans.push_back(arr[i][endingCol]);
            count++;
        }
        endingCol--;
        //print ending row;
        for (int i= endingCol; count<total && i>=startingCol; i--) {
            ans.push_back(arr[endingRow][i]);
            count++;
        }
        endingRow--;
        //printing starting col;
        for (int i= endingRow; count<total && i>=startingRow; i--) {
            ans.push_back(arr[i][startingCol]);
            count++;
        }
        startingCol++;
    }

}