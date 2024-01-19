#include<iostream>
#include<algorithm>
#include<string>
#include<climits>
using namespace std ;
int main (){
 string s = "  -4352 with vishal";
        if(s.empty()) cout<<0; //Base Case
        long i=0, sign=1, sum=0, res=0;
        while(i<s.length() && s[i]==' ')++i; //Remove Blank Space
        if(s[i] == '-' || s[i]=='+'){ 
            s[i++]=='-' ? sign = -1 : sign = 1; //handle Pos/Neg
        }

        while(i<s.length()){ 
            //if current value id digit then add it else exit;
            if(s[i]>=48 && s[i]<=57) res = res *10 + (s[i++]-'0');
            else cout<<res*sign; 

            //Handle overflow 
            if(res > INT_MAX)return sign== -1 ? INT_MIN : INT_MAX;  
           
        }
        cout<<res*sign; 
}