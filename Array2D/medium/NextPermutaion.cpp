#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
using namespace std;
void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        // finding pivet index
        int idx = -1;
        for(int i= n-2; i>=0; i--){
            if(nums[i]<nums[i+1]){
                idx = i;
                break;

            }
        }
        if( idx == -1){
            reverse(nums.begin(), nums.end());
            return;
        }
        // sorting after pivet
        reverse(nums.begin()+(idx+1), nums.end());
        //finding judt grester element than idx
        int j = -1;
        for(int i=idx+1; i<n; i++){
            if(nums[i]>nums[idx]){
                 j=i;
                break;
            }
        }
        // swaping idx and j
        int temp = nums[idx];
        nums[idx]= nums[j];
        nums[j] = temp;
        for(int i=0; i<n; i++){
            cout<<nums[i]<<" ";
        }         
}
int main (){
  vector<int>nums;
  nums.push_back(1);
  nums.push_back(3);
  nums.push_back(2);
  nextPermutation(nums);


}


