class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        /*int maxsum=INT_MIN;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                    sum+=nums[j];
                    maxsum=max(maxsum,sum);
                }
            }
        
        return maxsum;
    }*/

    int sum=0;
    int maxsum=INT_MIN;
    int n=nums.size();
    for(int i=0;i<n;i++){
        sum+=nums[i];
     maxsum=max(maxsum,sum);
     if(sum<0){
        sum=0;
     }
    }
     return maxsum;
    }
    
};
