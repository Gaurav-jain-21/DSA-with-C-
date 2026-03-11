#include<iostream>
using namespace std;
bool isPresent(int arr[][3], int target ,int row, int col) {
     for (int i=0; i<row; i++) {
          for (int j=0; j<col; j++) {
               if (arr[i][j] == target) {
                    return true;
               }
          }
     }
     return false;

}
void RowSum(int arr[][3],int row, int col) {
     int sum=0;
     for (int i=0; i<row;i++) {
          for (int j=0; j<col; j++) {
               sum=sum+arr[i][j];
          }
          cout<<"the sum of "<<i<<"is"<<sum<<endl;
          sum=0;
     }
}
int largestRowSum(int arr[][3], int row, int col) {
     int max= INT_MIN;
     int num=-1;
     for (int row=0; row<row; row++) {
          int sum=0;
          for (int col=0; col<col; col++) {
               sum+=arr[row][col];
          }
          if (sum>max) {

               max=sum;
               num= row;
          }
     }
     cout<<"the maximum sum is "<<max <<endl;
     return num;
}
int main() {
     //create 2 d array
     int arr[3][3];
     for (int i=0; i<3; i++) {
          for (int j= 0; j<3; j++) {
               cin>>arr[i][j];
          }
     }
     //print
     for (int i=0; i<3; i++) {
          for (int j= 0; j<3; j++) {
               cout<<arr[i][j] <<" ";
          }
          cout<<endl;
     }
     RowSum(arr, 3 ,3);
     cout<<largestRowSum(arr, 3,3);
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