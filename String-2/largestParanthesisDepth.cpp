#include<iostream>
#include<algorithm>
#include<stack>
using namespace std;
int main (){
string s = "(1+(2*3)+((8)/4))+1";
 int ans=0;
        int maxans=0;
        stack<char> stk;
        for(char c:s){
            if(c=='('){
                stk.push(c);
                ans++;
                maxans= max(ans, maxans);
            }
            else if(c==')'){
                stk.pop();
                ans--;
                maxans= max(ans, maxans);
            }
        }
        cout<<maxans;

}