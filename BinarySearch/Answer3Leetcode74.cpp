// You are given an m x n integer matrix matrix with the following two properties:
// Each row is sorted in non-decreasing order.
// The first integer of each row is greater than the last integer of the previous row.
// Given an integer target , return true if target is in matrix or false otherwise.
// You must write a solution in O(log(m * n)) time complexity. [Leetcode 74]
// Example 1:
// Input: matrix = [[1,3,5,7],[10,11,16,20],[23,30,34,60]], target = 3
// Output: tru
#include<iostream>
#include<vector>
using namespace std;
bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(); // rows
        int n = matrix[0].size(); // columns
        for(int i=0; i<m; i++){
           int lo = 0;
           int hi = n-1;
           while(lo<=hi){
               int mid = lo +(hi-lo)/2;
               if(matrix[i][mid] == target){
                   return true;
                   break;
               }
               else if ( matrix[i][mid]<target){
                   lo = mid +1;
               }
               else{
                   hi =mid-1;
               }
           }

        }
        return false;

    }

int main (){
//  int matrix[3][4] =  {{1,3,5,7},{10,11,16,20},{23,30,34,60}};
 vector<int>a;
 a.push_back(1);
 a.push_back(3);
 a.push_back(5);
 a.push_back(7);
 vector<int>b;
 b.push_back(10);
 b.push_back(11);
 b.push_back(16);
 b.push_back(20);
 vector<int>c;
 c.push_back(23);
 c.push_back(30);
 c.push_back(34);
 c.push_back(60);
 vector<vector<int>>matrix;
 matrix.push_back(a);
 matrix.push_back(b);
 matrix.push_back(c);

 int target = 3;
 for(int i=0; i<3; i++){
    for(int j=0; j<4; j++){
        cout<<matrix[i][j]<<" ";
    }
    cout<<endl;
 }
 cout<<endl;
 cout<<"Is the target Present in the 2D Matrix -->";
 cout<<searchMatrix(matrix, target);


}