#include<iostream>
#include<vector>
using namespace std;
 string helper(string str, int k, string ans){
        int n = str.size();
        if( n==1){
            ans += str;
            return ans;
        }
        int fact = 1;
        for(int i=2; i<=n-1; i++){
            fact *= i;
        }
         int idx = k/fact;
         if(k%fact ==0) idx--;
         char ch = str[idx];
         string left  = str.substr(0, idx);
         string right = str.substr(idx+1);
         int q = 1;
         if(k%fact ==0) q = fact;
         else q = k%fact;
         return helper(left+right,q, ans+ch); 
    }    

    string getPermutation(int n, int k) {
        string str = "";
        for(int i=1; i<=n; i++){
            str += to_string(i);
        }
        string ans = "";
        return helper(str, k, "");

    }
    int main (){
    int n;
    cout<<"Enter any number :"<<endl;
    cin>>n;
    int k;
    cout<<"Enter the Target integer :"<<endl;
    cin>>k;
    cout<<getPermutation(n, k);


    }