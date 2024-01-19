#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main (){
//  {"flower","flow","flight"};
vector<string> v;
v.push_back("flower");
v.push_back("flow");
v.push_back("flight");
if(v.size()==1){
    cout<<v[0];
}
sort(v.begin(), v.end());

for(int i=0; i<v.size(); i++){
    cout<<v[i]<<endl;
}
cout<<endl;
string first = v[0];
string last = v[v.size()-1];
string s = " ";
for(int i=0; i<(min(first.size(), last.size())); i++){
        if(first[i] == last[i] ){
             s += first[i];
        }
        // else{
        //     cout<<s<<endl;
        // }

     
}

cout<<s;





}