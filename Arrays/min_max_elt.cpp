pair<long long, long long> getMinMax(vector<long long int> arr) {
        
        vector<pair<long,long>>res;
        int n=arr.size();
        long long mini=LLONG_MAX;
        long long maxi=LLONG_MIN;
        for(int i=0;i<n;i++){
            
                mini=min(mini,arr[i]);
                maxi=max(maxi,arr[i]);
            }
        
       return{mini,maxi};
        
    }
