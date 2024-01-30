#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void helper(vector<int>& nums, vector<int>& ans, vector<vector<int>>& finalans, int idx) {
        finalans.push_back(ans); // Add the current subset to the final result
        
        for (int i = idx; i < nums.size(); ++i) {
            if (i > idx && nums[i] == nums[i - 1])
                continue; // Skip duplicates
            
            ans.push_back(nums[i]); // Include current element in the subset
            helper(nums, ans, finalans, i + 1); // Recurse with next index
            ans.pop_back(); // Backtrack: Remove the current element from the subset
        }
    }

    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> finalans;
        
        sort(nums.begin(), nums.end()); // Sort the input array to handle duplicates
        helper(nums, ans, finalans, 0);
        
        return finalans;

    }

int main (){
vector<int>nums;
nums.push_back(1);
nums.push_back(2);
nums.push_back(3);
subsetsWithDup(nums);


}
