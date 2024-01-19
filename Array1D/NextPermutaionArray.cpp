// find the next permutation of an array 
// step-1 find a pivet from aray pivet means right to left sbse small unit
// step-2 age ka element reverse karke pivet idx ko swap kar do
#include<iostream>
#include<vector>
using namespace std;


int main (){
vector<int>v;
v.push_back(2);
v.push_back(0);
v.push_back(1);
v.push_back(2);
v.push_back(0);
v.push_back(1);
v.push_back(1);

for(int i=0; i<v.size(); i++){
     cout<<v[i]<<" " ;
}

}