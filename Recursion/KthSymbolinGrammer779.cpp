#include<iostream>
#include<vector>
using namespace std;
 int kthGrammar(int n, int k) {
        if(n==1) return 0;
        if(k%2 ==0 ){ // k is even // flip answer milega 
            int prevAns = kthGrammar(n-1 , k/2); 
            if( prevAns ==0) return 1;
            else return 0;
        }
        else{ // kis odd // same ans dega 
              int prevAns= kthGrammar(n-1, (k/2 +1));
              return prevAns;
              
        }
        
    }
    int main (){
     int n = 3;
     int k = 6;
     cout<<kthGrammar(n, k);

    }
