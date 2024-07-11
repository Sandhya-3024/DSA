class Solution {
  public:
      bool containsDuplicate(vector<int>& nums) {
        /*bool flag=false;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]==nums[j]){
                    return true;
                }
            }
        }
        return flag;
      }*/

      /*unordered_map<int,int>mp;
      for(int i=0;i<nums.size();i++){
        mp[nums[i]]++;
     }
     for(auto it:mp){
        if(it.second>1) return true;
     }
     return false;
     }*/
     int n=nums.size();
     int i=0;
     int j=n-1;
     if(n==1) return false;
     while(i<j){
        if(nums[i]==nums[j]){
            return true;
            break;
        }
        else{
            i++;
            j--;
        }
     }
     return false;
      }
};
