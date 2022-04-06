class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        int n= arr.size();
        long long ans =0;
        unordered_map<int,int> pairs;
        for(int i=0;i<n;i++){
            ans+=pairs[target-arr[i]];
            ans%=1000000007;
            for(int j=0;j<i;j++){
                pairs[arr[i]+arr[j]]++;
            }
        }
        return ans;
    }
};