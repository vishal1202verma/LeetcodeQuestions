#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
#include<vector>
using namespace std;
int main (){
string arr[] = {"0123", "0023", "456", "00182", "940", "002902"};
int max = stoi(arr[0]);
string maxS = arr[0];
for(int i=1; i<=5; i++){
    int num = stoi(arr[i]);
    if(max<num){
        max= num;
        maxS = arr[i];
    }
}
cout<<max<<endl;
cout<<maxS<<endl;






}