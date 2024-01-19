#include<iostream>
using namespace std;
int main (){
int arr[7] = {1,2,3,4,5,6,7};
int n =7;
int k =3;
        for(int i=0; i<k; i++){
            for(int j= n-1; j>k; j--){
                int temp  = arr[j];
                arr [j]= arr [i];
                arr[i] = temp;
            }
        }
        int i = k;
        int j =k+1;
        while(i<=n){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            i++;
            j++;
        }


//printing 
       cout<<"the roated array is :"<<endl;
       for(int i=0; i<7; i++){
        cout<<arr[i]<<" ";
       }


}