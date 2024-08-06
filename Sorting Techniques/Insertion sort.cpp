void insertionSort(int n, vector<int> &arr){
    // Write your code here.
    for(int i=1;i<=n-1;i++){
          int j=i;
        while(j>=0 && arr[j-1]>arr[j]){
            swap(arr[j-1],arr[j]);
            j--;
        }
    }
}
