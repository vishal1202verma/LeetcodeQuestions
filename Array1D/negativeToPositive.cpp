#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &v){
    int n= v.size();
    int non =0; // non = no of negative
    int nop =0; // nop = no of postive
    for(int i=0; i<n; i++){
        if(v[i]<0) non ++;
        else nop ++;
    }
    //filling 
    for(int i=0; i<n; i++ ){
        if(i<non) v[i] = -i;
        else v[i] = i;
    }
}
int main (){
vector<int>v;
v.push_back(1);
v.push_back(-2);
v.push_back(3);
v.push_back(-4);
v.push_back(-5);
v.push_back(6);
v.push_back(8);
sort(v);
for(int i=0; i<v.size(); i++){
     cout<<v[i]<<" " ;
}

}