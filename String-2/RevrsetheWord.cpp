#include<iostream>
#include<vector>
#include<algorithm>
#include<sstream>
using namespace std;
int main (){
string s = "the sky is blue";
 vector<string> words;
        stringstream ss(s);
        string tmp;
        while (ss >> tmp)
            words.push_back(tmp);

        string ans;
        for (int i = words.size() - 1; i >= 0; --i) {
            if (i != words.size() - 1) ans += " ";
            ans += words[i];
        }
        cout<<"this is the reverse word of string : "<<ans;
        

}