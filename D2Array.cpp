#include<iostream>
using namespace std;
bool isPresent(int arr[][4], int target ,int row, int col) {
     for (int i=0; i<row; i++) {
          for (int j=0; j<col; j++) {
               if (arr[i][j] == target) {
                    return true;
               }
          }
     }
     return false;

}
void RowSum(int arr[][4],int row, int col) {
     int sum=0;
     for (int i=0; i<row;i++) {
          for (int j=0; j<col; j++) {
               sum=sum+arr[i][j];
          }
          cout<<"the sum of "<<i<<"is"<<sum<<endl;
          sum=0;
     }
}
int main() {
     //create 2 d array
     int arr[3][4];
     for (int i=0; i<3; i++) {
          for (int j= 0; j<4; j++) {
               cin>>arr[i][j];
          }
     }
     //print
     for (int i=0; i<3; i++) {
          for (int j= 0; j<4; j++) {
               cout<<arr[i][j] <<" ";
          }
          cout<<endl;
     }
     RowSum(arr, 3 ,4);
     cout<<"Enter the element to search";
     int target;
     cin>>target;
     if (isPresent(arr, target, 3,4)) {
          cout<<"Element Found";
     }
     else {
          cout<<"Element Not Found";
     }


}