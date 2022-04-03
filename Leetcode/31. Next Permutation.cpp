class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int i = nums.size() - 2, j = i + 2;
        while (i >= 0 && nums[i] >= nums[i + 1])
            i--;
        if (i == -1) {
            reverse(begin(nums), end(nums));
            return;
        }
        while (nums[--j] <= nums[i]);
        swap(nums[i], nums[j]);
        sort(begin(nums) + i + 1, end(nums));
    }
};
