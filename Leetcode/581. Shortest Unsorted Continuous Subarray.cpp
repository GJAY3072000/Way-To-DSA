class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end());
        
        int bottom = 0;
        int top = sorted.size() - 1;
        
        while(bottom < sorted.size() && sorted[bottom] == nums[bottom]) bottom++;
        if(bottom == sorted.size()) return 0;
        while(top >= 0 && sorted[top] == nums[top]) top--;
        return top - bottom + 1;
    }
};