// You are given a string num, representing a large integer. Return the largest-valued odd integer (as a string) that is a non-empty substring of num, or an empty string "" if no odd integer exists.

// A substring is a contiguous sequence of characters within a string.
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string num = "52";
        int index=-1;
        string ans;
        for(int i=num.size();i>=0;i--)
        {
            int temp=(int)num[i];
            if(temp%2==1)
            {
                index=i;
                break;
            }
        }
        if(index==-1)
        cout<<ans;
        cout<<num.substr(0,index+1);
        

    }
