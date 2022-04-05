class Solution {
public:
    void permute(vector<int>& nums,vector<vector<int>>&ans,int pos)
    {
        if(pos==nums.size()-1)
        {
            ans.push_back(nums);
            return;
        }
        set<int>s;
        for(int i=pos;i<nums.size();i++)
        {
            if(s.find(nums[i])!=s.end())continue;
            s.insert(nums[i]);
            swap(nums[i],nums[pos]);
            permute(nums,ans,pos+1);
            swap(nums[i],nums[pos]);
        }
    }
    
    
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        int pos=0;
        vector<vector<int>>ans;
        permute(nums,ans,pos);
        
            return ans;
    }
};