#include<iostream>
#include<string>
#include<algorithm>
#include<sstream>
using namespace std;
int main (){
string str = "vishal verma is a good cooder";
stringstream ss(str);
string temp;

while(ss>>temp){
    cout<<temp<<" ";
}





}