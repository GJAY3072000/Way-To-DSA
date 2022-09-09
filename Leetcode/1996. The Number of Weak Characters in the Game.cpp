class Solution {
private:
    static bool comp(vector<int>&a,vector<int>& b){
        if(a[0]==b[0]){
            return a[1]>b[1];
        }
        return a[0]<b[0];
    }
public:
    int numberOfWeakCharacters(vector<vector<int>>& p) {
        int n=p.size(),m=p[0].size();
        sort(p.begin(),p.end(),comp);
        int weakpeople=INT_MIN;
        int ans=0;
        for(int i=n-1;i>=0;i--){
            if(p[i][1]<weakpeople) ans++;
            weakpeople=max(weakpeople,p[i][1]);
        }
        return ans;
    }
};