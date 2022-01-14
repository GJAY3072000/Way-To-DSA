//Find Numbers with Even Number of Digits

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        int ans=0;
        for(int i=0;i<nums.size();i++){
            ans=floor(log10(nums[i])+1);
            if(ans%2==0){
                count=count+1;
            }
        }
        return count;
        
    }
};