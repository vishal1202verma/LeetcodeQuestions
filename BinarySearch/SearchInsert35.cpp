#include<iostream>
#include<vector>
using namespace std;
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        bool flag = false;
        int lo =0;
        int hi = n-1;
        int ans;
        while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(nums[mid]>target){
              hi = mid-1;
              ans = mid;
        }        
        else if ( target>nums[mid]){
            lo = (mid+1);
            ans = lo;
        }
        else{
            return mid;
        }
        
        } 
        
       return ans;

   }
};