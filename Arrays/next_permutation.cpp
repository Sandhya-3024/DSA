class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int breakpnt=-1;
        int n=nums.size();
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                breakpnt=i;
                break;
            }
        }
        if(breakpnt==-1){
            reverse(nums.begin(),nums.end());
            return;
        }

        for(int i=n-1;i>=0;i--){
            if(nums[i]>nums[breakpnt]){
                swap(nums[breakpnt],nums[i]);
                break;
            }
        }
        reverse(nums.begin()+breakpnt+1,nums.end());
      
    }
};
