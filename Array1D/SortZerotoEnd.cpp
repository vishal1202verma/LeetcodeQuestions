#include<iostream>
using namespace std;
int main (){
int arr[5] = {0,1,0,3,12};
int n=5;
for(int i=0; i<n; i++){
   for(int j=n-1; j>=n-2; j--){
        if(arr[i]==0){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
       
    
   }
}
for(int i=0; i<n; i++){
    int temp  = arr[n-3];
    arr[n-3] = arr[0];
    arr[0] = temp;
}
// int i=0;
// int j =n-1;
// while(i<n){
//     if(arr[i] ==0){
//         int temp = arr[j];
//         arr[j] = arr[i];
//         arr[i] = temp;
//         i++;
//         j--;
//     }
//     else{
//         arr[i] = arr[j];
//     }
    
// }


// printing the array

for(int i=0; i<n; i++){
    cout<<arr[i]<<" ";
}



}