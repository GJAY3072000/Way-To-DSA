class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return true;
        int next = nums[n-1], nextIdx=n-1;
        
        for(int i=n-2; i>=0; i--) {
            if(nums[i] + i >= nextIdx) {
                next = nums[i];
                nextIdx = i;
            }
        }
        if(nextIdx == 0) {
            return true;
        } else {
            return false;
        }
    }
};