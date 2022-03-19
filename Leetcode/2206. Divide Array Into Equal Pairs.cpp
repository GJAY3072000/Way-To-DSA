class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mt;
        for(int i=0;i<n;i++){
            mt[nums[i]]++;
        }
        for(auto i:mt){
           if(i.second % 2 == 1)
               return false;
        }
        return true;
    }
};