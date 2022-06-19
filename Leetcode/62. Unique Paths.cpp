class Solution {
public:
    int helper(int startx, int starty, int x, int y, vector<vector<int>> &dp){
        if(startx==x && starty==y){
            return 1;
        }
        if(dp[startx][starty]!=-1){
            return dp[startx][starty];   
        }
        int right=0;
        int down=0;
        if(startx<x){
            right= helper(startx+1,starty,x,y,dp);
        }
        if(starty<y){
            down= helper(startx,starty+1,x,y,dp);
        }
        return dp[startx][starty]=right+down;
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(n,vector<int>(m,-1));
        return helper(0,0,n-1,m-1, dp);
    }
};