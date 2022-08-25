class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_map <int,int> ump;
        for(int i=0;i<nums.size();i++)
            ump[nums[i]]++;
        for(int i=1;i<=nums.size();i++)
            if(ump[i] == 0)
                return i;
        return nums.size() + 1; 
    }
};