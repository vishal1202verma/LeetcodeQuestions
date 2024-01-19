#include<iostream>
#include<algorithm>
using namespace std;
int main (){
 int arr[3][3] = {1, 2 ,3 ,4 ,5, 6, 7 ,8, 9};
 // transpose the array 
  for (int i=0; i<3; i++){
    for(int j=0; j<=i; j++){
        int temp = arr[i][j];
        arr[i][j] = arr[j][i];
        arr[j][i]  = temp;
    }
  }  
  // reverse the array 
//   
for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        int temp = arr[i][0];
        arr[i][0] = arr[i][2];
        arr[i][2] = temp;
    }
}

  // printing the aray 
  for(int i=0; i<3; i++){
    for(int j=0; j<3; j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<endl;
  }


}