// There is an integer array nums sorted in non-decreasing order (not necessarily with 
// distinct values).
// Before being passed to your function, nums is rotated at an unknown pivot index k ( 0 <= k 
// < nums.length ) such that the resulting array is [nums[k], nums[k+1], ..., nums[n-1], 
// nums[0], nums[1], ..., nums[k-1]] (0-indexed). For example,
// [0,1,2,4,4,4,5,6,6,7] might be rotated at pivot index 5 and become
// [4,5,6,6,7,0,1,2,4,4] .
// Given the array nums after the rotation and an integer target , return true if target is in
// nums , or false if it is not in nums .
// You must decrease the overall operation steps as much as possible. [Leetcode 81]
// Example 1:
// Input: nums = [2,5,6,0,0,1,2], target = 0
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool search(vector<int>& nums, int target) {
        int n  = nums.size();
        
         int low = 0 , hi = nums.size() - 1;
         while(low <= hi){
          int mid = low + (hi - low)/2;
              if(nums[mid] == target)return true;
              else if(nums[low] == nums[mid] && nums[mid] == nums[hi]){
                    low++;
                     hi--;
                    }
             else if(nums[low] <= nums[mid]){
                if(nums[low] <= target && target <= nums[mid])hi = mid - 1;
                 else low = mid + 1;
                }
             else {
                if(nums[mid] <= target && target<= nums[hi])low = mid + 1;
                else hi = mid - 1;
            }
        }
         return false;




    }

   int main (){
    //  int arr[] = {2,5,6,0,0,1,2};
    //  int n = sizeof(arr)/sizeof(arr[0]);
     vector<int>nums;
     nums.push_back(2);
     nums.push_back(5);
     nums.push_back(6);
     nums.push_back(0);
     nums.push_back(0);
     nums.push_back(1);
     nums.push_back(2);
     int target = 0;
     cout<<search(nums, target);
     






   }