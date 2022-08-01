class Solution {
public:
    bool isPossible(vector<int> &weights,int days,int mid){
        int d=1;
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            if(sum>mid){
                d++;
                sum=weights[i];
            }
        }
        return d<=days;
    }
    
    int shipWithinDays(vector<int>& weights, int days) {
        int maxi=0,sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
            maxi=max(maxi,weights[i]);
        }
        if(weights.size()==days){
            return maxi;
        }
        int low=maxi;
        int high=sum;
        int ans;
        while(low<=high){
            int mid=low+(high-low)/2;
            if(isPossible(weights,days,mid) == true){
                ans =mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};