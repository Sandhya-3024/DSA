class Solution {
public:
    int majorityElement(vector<int>& nums) {
       /* unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        for(auto it:mp){
            if(it.second>n/2) return it.first;
            }
            return -1;
        }*/

        int elt=0;
        int cnt=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;
                elt=nums[i];
            }
            else if(nums[i]==elt){
                cnt++;
            }
            else cnt--;
        }
        return elt;
    }
    
};
