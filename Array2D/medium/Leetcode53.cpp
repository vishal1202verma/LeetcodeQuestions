// Given an integer array nums, find the  subarray with the largest sum, and return its sum.
#include<iostream>
#include<climits>
using namespace std;
int main (){
int a[9] = {-2,1,-3,4,-1,2,1,-5,4};
int sum = INT_MIN;
int cursum =0;
for(int i=0; i<9; i++){
   cursum += a[i];
   if( cursum>sum){
     sum = cursum;
   }
   if(cursum<0){
      cursum=0;
   }
}
cout<<sum;


}