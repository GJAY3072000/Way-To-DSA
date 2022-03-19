class Solution {
public:
    int m,n;
    long long count(string a, string b){
    m = a.length();
    n = b.length();
    long long lookup[m + 1][n + 1] ;
    for (long long i = 0; i <= n; ++i)
        lookup[0][i] = 0;
    for (long long i = 0; i <= m; ++i)
        lookup[i][0] = 1;
    for (long long i = 1; i <= m; i++)
    {
        for (long long j = 1; j <= n; j++)
        {
            if (a[i - 1] == b[j - 1])
                lookup[i][j] = lookup[i - 1][j - 1] +
                               lookup[i - 1][j];
            else
                lookup[i][j] = lookup[i - 1][j];
        }
    }
 
    return lookup[m][n];
}
    long long maximumSubsequenceCount(string text, string pattern) {
        string text1,text2;
        text1=pattern[0]+text;
        long long ans1=count(text1,pattern);
        text2=text+pattern[1];
        long long ans2=count(text2,pattern);
        return max(ans1,ans2);
    }
};