class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
	int n = size(triangle), level = n - 1;
	vector<vector<int> > dp(2, vector<int>(n, 0));
	dp[level-- & 1] = triangle[n - 1];
	for(; level >= 0; level--)
		for(int i = 0; i <= level; i++)
			dp[level & 1][i] = triangle[level][i] + min(dp[(level + 1) & 1][i], dp[(level + 1) & 1][i + 1]);
	return dp[0][0];
}
};