class Solution {
public:
    
    void rotate(vector<int>&nums,int k){
      /* int n=nums.size();
       k=k%n;
       reverse(nums.begin(),nums.end());
       reverse(nums.begin(),nums.begin()+k);
       reverse(nums.begin()+k,nums.end());
    }*/
    int n=nums.size();
    vector<int>temp(n); 
    for(int i=0;i<n;i++){
        temp[(i+k)%n]=nums[i];
    }
    for(int i=0;i<n;i++){
        nums[i]=temp[i];
    }
    }
};
