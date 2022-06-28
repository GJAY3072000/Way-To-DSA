class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n1 = text1.size(),n2 = text2.size();
        int dp[n1][n2];
        if(text1[0] == text2[0]){
            dp[0][0] = 1;
        }
        else{
            dp[0][0] = 0;
        }
        for(int i=1;i<n1;i++){
            if(text1[i] == text2[0]){
                dp[i][0] = 1;
                continue;
            }
            dp[i][0] = dp[i-1][0];
        }
        for(int i=1;i<n2;i++){
            if(text2[i] == text1[0]){
                dp[0][i] = 1;
                continue;
            }
            dp[0][i] = dp[0][i-1];
        }
        for(int i=1;i<n1;i++){
            for(int j=1;j<n2;j++){
                if(text1[i] == text2[j]){
                    dp[i][j] = max(1+dp[i-1][j-1],max(dp[i-1][j],dp[i][j-1]));
                }
                else{
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[n1-1][n2-1];
    }
};