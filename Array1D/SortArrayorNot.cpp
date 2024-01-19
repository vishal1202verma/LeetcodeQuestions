#include<iostream>
using namespace std;
int main (){
int arr[5] = {1, 2, 3,4,5,};
int sort = arr[0];
for(int i=0; i<5; i++){
    if(sort<arr[i]){
       sort = arr[i];
    }
       cout<<" array is sorted";
    
    break;
}

}