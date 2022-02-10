class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        if(n==0)
            return 0;
        unordered_map<int,int> mp;
        int curSum=0;
        int i=0;
        int count=0;
        while(i<n){
            curSum+=nums[i];
            if(curSum==k)
                count+=1;
            if(mp.find(curSum-k)!=mp.end())
                count+=mp[curSum-k];
            mp[curSum]+=1;
            i+=1;
        }
        return count;
    }
};