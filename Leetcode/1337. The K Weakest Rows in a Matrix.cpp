class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<int> res;
        set<pair<int, int>> s;
        for (auto row = 0; row < mat.size(); row++) {
            auto count = accumulate(mat[row].begin(), mat[row].end(), 0);
            s.insert(make_pair(count, row));
        }
        for (auto it = s.begin(); it != s.end(), k > 0; k--, it++)
            res.push_back(it->second);
        return res;  
    }
};