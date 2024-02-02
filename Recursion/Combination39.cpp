#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void combination( vector<vector<int>>&ans, vector<int>v, vector<int>& candidates,int target ,int idx ){
    int n = candidates.size();
      if(target == 0 ){
        
       ans.push_back(v);
      }

      if(target<0) return;
      for(int i=idx; i<n; i++){
          v.push_back(candidates[i]); // iss hamesha teen call hi lagege 
          combination(ans, v, candidates, target-candidates[i], i); 
          v.pop_back();
      }


}
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
         vector<vector<int>>ans;
         vector<int>v;
         combination(ans, v, candidates, target, 0); 
         return ans; 
    }


int main (){
    vector<int>candidates;
    candidates.push_back(2);
    candidates.push_back(3);
    candidates.push_back(5);
    candidates.push_back(7);
    int target = 7;
      combinationSum(candidates, target);

}