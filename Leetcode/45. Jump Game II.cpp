class Solution {
public:
    int jump(vector<int>& nums) {
        vector<int> jumps(nums.size(), INT_MAX);
        jumps[0] = 0;
        
        for (int i = 0; i < nums.size(); ++i) {
            if (jumps[i] == INT_MAX) {
                continue;
            }
            
            for (int j = 1; j <= nums[i] && (i + j) < nums.size(); ++j) {
                int index = i + j;
                jumps[index] = min(jumps[index], jumps[i] + 1);
            }
        }
        
        return jumps[nums.size() - 1];
    }
};