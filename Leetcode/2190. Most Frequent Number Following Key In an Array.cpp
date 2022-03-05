class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        int answer=-1;
        int res=INT_MIN;
        int n=nums.size();
        int count=1;
        
        if(nums.size()==2){
            return nums[1];
        }
        
        for(int i=0;i<n;i++){
            if(nums[i]==key){
                int target=nums[i+1];
                for(int k=i+1;k<n;k++){
                    if(nums[k]==key && nums[k+1]==target){
                        count++;
                    }
                }
                if(res<count){
                    answer=target;
                    res=max(res,count);
                }
            }
        }
        return answer;
    }
};