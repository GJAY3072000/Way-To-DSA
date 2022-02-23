class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int i=0;
        int j=nums.size()-1;
        vector<int> answer(nums.size());
        for(int k=nums.size()-1;k>=0;k--){
            if(abs(nums[i])<abs(nums[j])){
                answer[k]=nums[j]*nums[j];
                j--;
            }
            else{
                answer[k]=nums[i]*nums[i];
                i++;
            }
        }
        return answer;
    }
};
