 
 int cnt=0;
 void merge(vector<int>&arr,int low,int mid,int high){
    int left=low;
    int right=mid+1;
    vector<int>temp;
    while(left<=mid && right<=high){
        if(arr[left]<=arr[right]){
            temp.push_back(arr[left]);
            left++;
        }
        else{
            temp.push_back(arr[right]);
            cnt+=(mid-left+1);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }
    int j=0;
    for(int i=low;i<=high;i++){
        arr[i]=temp[j];
        j++;
    }
}
void ms(vector<int>& arr,int low,int high){
    if(low==high) return;
    int mid=(low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    merge(arr,low,mid,high);
}

void mergeSort(vector < int > & arr, int n) {
   
    ms(arr,0,n-1);
}


int numberOfInversions(vector<int>&a, int n) {
    mergeSort(a,n);
    return cnt;
}
