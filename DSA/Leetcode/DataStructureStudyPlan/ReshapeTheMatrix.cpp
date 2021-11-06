class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int m = nums.size(), n = nums[0].size(), o = m * n;
        if (r * c != o) return nums;
        vector<vector<int>> res(r, vector<int>(c, 0));
        for (int i = 0; i < o; i++) res[i / c][i % c] = nums[i / n][i % n];
        return res;
    }
};

/*i/c will give us the row number of output matrix. We will move to New row after every c elements and thus dividing by c will give the row number

i%c will give us the column number of output matrix. We will be begin from start of new row after every c elements and this the remainder will give column of current row.

The same happens in i/n and i%n but for the mat matrix*/