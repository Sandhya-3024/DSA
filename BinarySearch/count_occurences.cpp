//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
// } Driver Code Ends
//User function template for C+
class Solution {
public:
int firstoccurence(int nums[],int target,int low,int high){
            int first=-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]==target){
                    first=mid;
                    high=mid-1;
                }
                else if(nums[mid]<target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            return first;
        }
        int lastoccurence(int nums[],int target,int low,int high){
            int last=-1;
            while(low<=high){
                int mid=(low+high)/2;
                if(nums[mid]==target){
                    last=mid;
                    low=mid+1;
                }
                else if(nums[mid]<target){
                    low=mid+1;
                }
                else{
                    high=mid-1;
                }
            }
            return last;
        }
	/* if x is present in arr[] then returns the count
		of occurrences of x, otherwise returns 0. */
	int count(int arr[], int n, int x) {
	    int ans;
        int low=0;
        int high=n-1;
        int f=firstoccurence(arr,x,low,high);
        int l=lastoccurence(arr,x,low,high);
        if(f==-1 || l==-1) return 0;
        ans=l-f+1;
        return ans;
    }
	    // code here
	
};
//{ Driver Code Starts
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.count(arr, n, x);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends
