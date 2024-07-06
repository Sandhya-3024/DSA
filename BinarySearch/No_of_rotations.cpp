#include<bits/stdc++.h>
int findKRotation(vector<int> &arr){
        int ans=INT_MAX;
        int index=-1;
        int n=arr.size();
        int low=0;
        int high=n-1;
        while(low<=high){
            int mid=(low+high)/2;            
            if(arr[low]<=arr[high]){
                if(arr[low]<ans){
                    ans=arr[low];
                    index=low;
                }
                break;
            }            
            if(arr[low]<=arr[mid]){
              ans=min(ans,arr[low]);
                index=low;
                low=mid+1;

            }
            else {       
                    if (arr[mid] < ans)
                    ans = min(ans, arr[mid]);
                    index = mid;
                     high = mid - 1;
            }
        }

        return index;
    }
