class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        vector<int> res;
        set<int> s1;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]==key){
                for(int j=0;j<n;j++){
                    if(abs(i-j)<=k){
                        s1.insert(j);
                    }
                }
            }
        }
        res.assign(s1.begin(),s1.end());
        return res;
    }
};