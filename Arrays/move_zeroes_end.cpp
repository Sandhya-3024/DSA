void segregateElements(vector<int>& arr) {
       int n=arr.size();
       vector<int>neg;
        vector<int>pos;
        for(int i=0;i<n;i++){
           if(arr[i]<0){
               neg.push_back(arr[i]);
           }
           else{
               pos.push_back(arr[i]);
           }
       }
       
       for(int i=0;i<pos.size();i++){
           arr[i]=pos[i];
       }
       int j=0;
       for(int i=pos.size();i<=n;i++){
           arr[i]=neg[j];
           j++;
       }
    }
