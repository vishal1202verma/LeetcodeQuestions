// in a given array return the element which is present n/2 times in the array 
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
  int majorityElement(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        return nums[n/2];
    }
int main(){
vector<int>nums;
nums.push_back(4);
nums.push_back(2);
nums.push_back(4);
nums.push_back(4);
nums.push_back(2);
cout<<"the n/2 time element of the array is :"<<majorityElement(nums);
// cout<<"vishal verma ji";

}