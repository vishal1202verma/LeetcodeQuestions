#include<iostream>
#include<vector>
using namespace std;

 void  genrate(vector<string>&ans, string s, int ob, int cb, int n ){
         if( cb == n ){ // cb = close bracket, ob = open bracket
             cout<<s;
             return ;
         }
         if(ob<n){
             genrate( ans, s+'(' , ob+1,  cb, n );
         }
         if (cb<ob){
             genrate(ans, s+')', ob,  cb+1, n );
         }
    }
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        genrate( ans,"", 0,  0, n ); 
        return ans;
    }

    int main (){
       int n = 3;
       generateParenthesis(n);

    }