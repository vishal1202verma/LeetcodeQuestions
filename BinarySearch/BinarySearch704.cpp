#include<iostream>
#include<algorithm>
using namespace std;
int main (){
int arr []  = {2,3,4,5,1,66,7,7,18};
int n = 9;
int target = 18;
// binary search
int low =0;
        int hi = n-1;
        while(low<=hi){
        int mid = low +(hi-low)/2 ;
            if(arr[mid] == target){
                // flag = true;
                // idx = mid;
                return mid;
            }
             else if(arr[mid]>target){
                hi = mid - 1;
            }
            else{
                low = mid +1;
            }
            // low++;
            // hi--;
        }
        return -1;








}