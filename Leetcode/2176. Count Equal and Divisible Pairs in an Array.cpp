class Solution {
public:
    int countPairs(vector<int>& nums, int k) {
        int count=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]==nums[j] && i*j%k==0){
                    count++;
                }
            }
        }
        return count;
    }
};