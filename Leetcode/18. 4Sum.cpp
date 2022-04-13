class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        set<vector<int>>s;
        vector<vector<int>>ans;
        if(n<4)
            return ans;
        int l,r;
        for(int i=0;i<n-2;i++){
            for(int j=i+1;j<n-1;j++){
                int ntarget=target-nums[i]-nums[j];
                l=j+1,r=n-1;
            while(l<r){
                long long sum=nums[l]+nums[r];
                if(sum>ntarget)
                    r--;
                else if(sum<ntarget)
                    l++;
                else{
                    s.insert({nums[i],nums[j],nums[l],nums[r]});
                    l++;
                    r--;
                }
            }
        }
        
    }
        
    vector<vector<int>>res(s.begin(),s.end());
    return res;
        
    }
};