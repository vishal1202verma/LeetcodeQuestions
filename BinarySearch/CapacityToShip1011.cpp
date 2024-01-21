#include<iostream>
#include<vector>
#include<climits>
#include<algorithm>
using namespace std;

bool check(int mid, vector<int>& weights, int days){
       int n = weights.size();
       int m = mid;
       int count = 1; // count the no of days in travle
       for(int i=0; i<n; i++){
           if(m>=weights[i]){
               m -= weights[i];
           }
           else{
               count++;
               m = mid;
               m -= weights[i];
           }
       }
       if(count>days) return false;
       else return true;
    }

    int shipWithinDays(vector<int>& weights, int days) {
        int n = weights.size();
        // int capacity = min(weights);
        // return capacity; 
        // binary search for the capacity searching

        int sum = 0; // sum is hi of the binary serch
        for(int i=0; i<n; i++){
            sum += weights[i];
        }
        // max element of the array for low value of the binary serach
        int max = INT_MIN;
        for(int i=0; i<n; i++){
            if(max<weights[i]){
                max = weights[i];
            }
        } 
        // binary Search
        int lo = max; 
        int hi = sum;
        int Mincapacity = sum;
        while(lo<=hi){
            int mid  = lo +(hi-lo)/2;
            if(check(mid, weights,days)){
                Mincapacity = mid;
                hi = mid-1;
            }
            else{
                lo = mid +1;
            }

        }

           return Mincapacity;              
    }

    int main (){
    // [1,2,3,4,5,6,7,8,9,10], days = 5 
    // Output: 15
    int days = 5;
    vector<int>weights;
    for(int i=1; i<=10; i++){
        weights.push_back(i);
    }
    cout<<"the minimum capacity of ship will be :";
    cout<<shipWithinDays(weights, days);


    }