class Solution{
    public:
    vector<int> twoSum(vector<int>& nums, int target){
        map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(target-nums[i])>0)
            return{mp[target-nums[i]],i};
            
            mp[nums[i]]=i;
    
        }
        return{-1,-1};
    }
};
