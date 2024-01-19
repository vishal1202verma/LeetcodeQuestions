#include<iostream>
#include<algorithm>
#include<string>
#include<sstream>
#include<vector>
using namespace std;
int main (){
string s = "abcde";
string goal = "cdeab";
int n  = s.size();
int m  = goal.size();
    //    string last = "";
    //    for(int i=2;  i<n; i ++){
    //        last += s[i];
    //    } 
    //    cout<<last;
    //    cout<<endl;
    //    string temp = "";
    //     for(int i=0;  i<n-3; i ++){
    //        temp += s[i];
    //    } 
    //    cout<<temp;
    //    cout<<endl;
    //    string ans = last+temp;
    //    cout<<ans;
         int k=0;
        for(int k=0;k<s.size();k++){
            reverse(s.begin(),s.end()-1);
            reverse(s.begin(),s.end());
            if(s==goal)return true;
        }
        return false;


       


}