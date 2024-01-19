#include<iostream>
#include<sstream>
#include<algorithm>
#include<string>
#include<vector>
using namespace std;
int main (){
        string s  = "III";   
        int n  = s.size();
         vector<string>v;
         stringstream ss(s);
         string temp;
         int sum = 0;
         while(ss>> temp){
             v.push_back(temp);
         } 
         for(int i=0; i<n; i++){
             cout<<v[0];
             break;
         }

        

}