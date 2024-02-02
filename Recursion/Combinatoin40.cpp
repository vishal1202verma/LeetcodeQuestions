#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 void combination(vector<vector<int>>& ans, vector<int>& v, vector<int>& candidates, int target, int idx) {
        if (target == 0) {
            ans.push_back(v);
            return;
        }

        for (int i = idx; i < candidates.size(); ++i) {
            // Skip duplicates
            if (i > idx && candidates[i] == candidates[i - 1]) continue;
            
            // If current candidate exceeds target, break
            if (candidates[i] > target) break;

            // Add current candidate to combination
            v.push_back(candidates[i]);

            // Recursive call for next index with reduced target
            combination(ans, v, candidates, target - candidates[i], i + 1);

            // Backtrack
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> ans;
        vector<int> v;
        combination(ans, v, candidates, target, 0);
        return ans;
    }
    int main (){
    vector<int>cadidates;
    cadidates.push_back(1);
    cadidates.push_back(2);
    cadidates.push_back(3);
    int target = 3;
    combinationSum2(cadidates, target);

        
    }
