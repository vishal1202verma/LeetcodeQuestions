// sort nums 1s, 2s ,0s  using dutch flag algorith or three pointers
#include<iostream>
#include<vector>
using namespace std;
void sort(vector<int> &v){
    int n = v.size();
    int low =0; 
    int mid =0; 
    int hi = n-1;
    // mid ke bare main socho hamesha 
    // 0 to low-1 --> 0
    // hi+1 to end --> 2
    // lo to mid-1 --> 1

    while(mid<=hi){
        if(v[mid] ==2 ){
            int temp = v[mid];
            v[mid] = v[hi];
            v[hi] = temp;
            hi--;

        }
        else if(v[mid] ==0){
            int temp = v[mid];
            v[mid] = v[low];
            v[low] = temp;
            mid++;
            low++;

        }
        else mid++;

    }
}
int main (){
vector<int>v;
v.push_back(2);
v.push_back(0);
v.push_back(1);
v.push_back(2);
v.push_back(0);
v.push_back(1);
v.push_back(1);
sort(v);
for(int i=0; i<v.size(); i++){
     cout<<v[i]<<" " ;
}

}