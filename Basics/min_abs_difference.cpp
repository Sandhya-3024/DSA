int minimumAbsoluteDifference(vector<int> arr) {
   int n=arr.size();
   int res=-1;
   int mini=INT_MAX;
   sort(arr.begin(),arr.end());
        for(int i=1;i<n;i++){
            res=abs(arr[i-1]-arr[i]);
            mini=min(res,mini);
        }   
return mini;
}
