// Given an array of integers nums, sort the array in increasing order based on the frequency of the values. If multiple values have the same frequency, sort them in decreasing order.
#include<iostream>
#include<algorithm>
#include<hash_map>
#include<unordered_map>
#include<vector>
using namespace std;

  // USING LAMBDA FUNCTION
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int i = 0 ; i < nums.size() ; i++)
        mp[nums[i]]++;

        sort(nums.begin(), nums.end(),
        [&] (int a , int b){return mp[a]!=mp[b] ? mp[a] < mp[b] : a > b;});

        return nums;
    }

    int main (){
        vector<int>nums;
        nums.push_back(1);
        nums.push_back(1);
        nums.push_back(2);
        nums.push_back(2);
        nums.push_back(3);
        frequencySort(nums);
        

    }
