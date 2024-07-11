class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
       /* unordered_map<int,int>mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int moreneeded=target-nums[i];
            if(mp.find(moreneeded)!=mp.end()){
                return {mp[moreneeded],i};
            }
            mp[nums[i]]=i;
        }
        return {-1,-1};
    }*/

    vector<pair<int,int>>v;
    int n=nums.size();
    for(int i=0;i<n;i++){
        v.push_back({nums[i],i});
    }
    int left=0;
    int right=n-1;
    sort(v.begin(),v.end());
    while(left<right){
        if(v[left].first+v[right].first == target){
            return {v[left].second,v[right].second};
        }
       else if(v[left].first+v[right].first < target){
             left++;
        }
        else if(v[left].first+v[right].first>target){
            right--;
        }
    }
    return {-1,-1};

    }
};
