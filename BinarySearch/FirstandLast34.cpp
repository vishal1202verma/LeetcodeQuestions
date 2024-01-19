#include<iostream>
#include<vector>
using namespace std;


// class Solution {
// public:
//     vector<int> searchRange(vector<int>& nums, int target) {
//         int n = nums.size();
//         vector<int>ans;
//         int low = 0;
//         int hi = n-1;
//         bool flag = false;
//         while(low<=hi){
//             int mid = low +(hi-low)/2;
//             if(n == target  && n ==1){
//                 return {0 , 0};

//             }
           
            
            
        //     if(nums[mid] == target){
        //         if(nums[mid-1] != target){
        //             ans.push_back(mid);
        //             ans.push_back(mid+1);
        //             flag = true;
        //             break;
        //         }
        //         else{
        //             hi = mid-1;
        //         }
        //     }
        //     else if(nums[mid]<target){
        //         low = mid+1;
        //     }
        //     else{
        //         hi = mid-1;
        //     }
        // }
        //  if (!flag) {
        //     return { -1, -1 };
        // }
      
        // return ans;
//              if ( nums[mid] == target) {
//                 if ( mid ==0 || nums[mid - 1] != target) {
//                     ans.push_back(mid);
//                     flag = true;
//                     break;
//                 } else {
//                     hi = mid - 1;
//                 }
//             } else if (nums[mid] < target) {
//                 low = mid + 1;
//             } else {
//                 hi = mid - 1;
//             }
//         }

//         if (!flag) {
//             return { -1, -1 };
//         }

//         ans.push_back(ans[0] + 1);

//         return ans;
//     }
// };
class Solution {
public:
    int first(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                ans = mid;
                end = mid - 1;
            } else if (target > nums[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }

    int last(vector<int>& nums, int target) {
        int start = 0;
        int end = nums.size() - 1;
        int ans = -1;

        while (start <= end) {
            int mid = start + (end - start) / 2;
            if (nums[mid] == target) {
                ans = mid;
                start = mid + 1;
            } else if (target > nums[mid]) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return ans;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> result(2, -1);
        int firstIdx = first(nums, target);
        int lastIdx = last(nums, target);

        result[0] = firstIdx;
        result[1] = lastIdx;

        return result;
    }
};