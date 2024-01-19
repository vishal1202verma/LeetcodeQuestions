for(int i=0; i<n; i++){
   for(int j=n-1; j>n; j--){
        if(arr[i]==0){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
        }
   }
}