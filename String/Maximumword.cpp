#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main (){
string str = "vishal verma is a good cooder. he is a also pro developer";
stringstream ss(str);
string temp;
vector<string>v;
while(ss>>temp){
v.push_back(temp);
}
// sorting the vector
sort(v.begin(), v.end());
int maxcount =1;
int count =1;
for(int i=0; i<v.size(); i++){
    for(int j=i+1; j<v.size(); j++){
           if(v[i] == v[j])  count++;
           else count =1;
           maxcount = max(maxcount, count);
    }
}

for(int i=0; i<v.size(); i++){
    for(int j=i+1; j<v.size(); j++){
           if(v[i] == v[j]) count++;
           else{
            count =1;
           }
           if(count == maxcount){
               cout<<"the most occuring word is :"<<v[i]<<"-"<<maxcount<<endl;   
           }
    }
}


}