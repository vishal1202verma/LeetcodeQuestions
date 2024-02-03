#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 string countAndSay(int n) {
       if(n==1) return "1";
       string str =  countAndSay(n-1); // recursion call
       // str = 3322251 ==> 23 32 15 11
       string ztr= ""; // isko last main return karenge
       int freq = 1;
       char ch = str[0];
       for(int i=1; i<str.size(); i++){
           char dh = str[i];
           if(ch==dh){
               freq++;
           }
           else{ // ch != dh
               ztr += (to_string)(freq)+ch;
               freq = 1;
               ch = dh;
           }
       }
       ztr += (to_string)(freq)+ch;
       return ztr;

    }
int main (){
int n;
cout<<"Enter any number :";
cin>>n;
cout<<"the count and say string will be --> ";
cout<<countAndSay(n);






}
