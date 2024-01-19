#include<iostream>
#include<vector>
using namespace std;
int main (){
vector<int>nums;
nums.push_back(3);
nums.push_back(2);
nums.push_back(2);
nums.push_back(3);
int val =3;
int n = nums.size();
       int count = 0;
       for(int i=0; i<n; i++){
           if(val == nums[i])
           count++;
           for(int j=n-1; j>=0; j--){
               if(i ==val){
               int temp = nums[j];
               nums[j] =nums[i];
               nums[i] = temp;
               }
           }
           
       }
        cout<<count<<endl;
    
        for(int i=0; i<count; i++){
           cout<<nums[i]<<" ";
        }
    // int i = 0;
    //     for (int j = 0; j<n; j++) {
    //         if (nums[j] != val) {
    //             int temp = nums[i];
    //             nums[i] = nums[j];
    //             nums[j] = temp;
    //             i++;
    //         }
    //     }
    //    return i;



}
