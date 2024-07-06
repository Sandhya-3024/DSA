class Solution {
public:
int firstoccurence(vector<int>&nums,int target,int low,int high){
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
        int lastoccurence(vector<int>&nums,int target,int low,int high){
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
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int n=nums.size();
        int low=0;
        int high=n-1;
        int f=firstoccurence(nums,target,low,high);
        int l=lastoccurence(nums,target,low,high);
        ans.push_back(f);
        ans.push_back(l);
        return ans;
    }
        
};
