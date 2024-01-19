#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main (){
string s = "vishalvermaa";
int n  = s.length();
int max = 0;
for(int i=0; i<n; i++){
    char ch = s[i];
    int count =1;
    for(int j=i+1; j<n; j++){
        if( s[j] ==s[i]) count++;
    }
        if(max < count) max = count;
}

for(int i=0; i<n; i++){
    char ch = s[i];
    int count =1;
    for(int j=i+1; j<n; j++){
        if( s[j] ==s[i]) count++;
    }
        if(count == max){
            cout<<ch<<" "<<max<<endl;
        }
}




}