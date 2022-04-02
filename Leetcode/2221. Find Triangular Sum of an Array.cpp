class Solution {
public:
    int triangularSum(vector<int>& nums) {
        vector<vector<int>> arr;
        arr.push_back(nums);
        int i=0;
        for(i=0;arr[i].size()!=1;i++){
            int j=0;
            vector<int> v1;
            while(j<arr[i].size()-1){
                v1.push_back((arr[i][j]+arr[i][j+1])%10);
                j++;
            }
            arr.push_back(v1);
        }
        return arr[i][0]; 
    }
};