class Solution {
public:
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
int countpairs(vector<int>& arr,int low,int mid,int high){
    int right=mid+1;
    for(int i=low;i<=mid;i++){
        while(right<=high && (long long)arr[i]>2LL*arr[right]){
            right++;
        }
            cnt+=(right-(mid+1));
        }
    
    return cnt;   
}
void ms(vector<int>& arr,int low,int high){
    if(low==high) return;
    int mid=(low+high)/2;
    ms(arr,low,mid);
    ms(arr,mid+1,high);
    countpairs(arr,low,mid,high);
    merge(arr,low,mid,high);
}

void mergeSort(vector < int > & arr, int n) {  
    ms(arr,0,n-1);
}
   int reversePairs(vector<int>& nums) {
    int n=nums.size();
    mergeSort(nums,n);
    return cnt;
    }
};
