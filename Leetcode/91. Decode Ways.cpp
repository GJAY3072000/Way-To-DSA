class Solution {
public:
    int numDecodings(string s) {
        int n=s.size();
        vector<int> dp(n+1,0);
        dp[0]=1;
        if(s[0]=='0')
            dp[1]=0;
        else
            dp[1]=1;
        for(int i=2;i<=n;i++)
        {
            int ans=0;
            string digit;
            digit=s.substr(i-1,1);
            if(digit>"0")
                ans+=dp[i-1];
            digit=s.substr(i-2,2);
            if(digit>="10" && digit<="26")
                ans+=dp[i-2];
            dp[i]=ans;
        }
        return dp[n];
    }
};