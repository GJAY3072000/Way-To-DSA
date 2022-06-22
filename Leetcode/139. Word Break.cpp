class Solution {
public:
    bool wordBreak(string s, vector<string>& wd) {
        unordered_set<int> len;
        unordered_set<string> h;
        for(int i = 0; i < wd.size() ; i++){
            h.insert(wd[i]);
            len.insert(wd[i].size());
        }
        vector<bool> dp (s.size()+1, false);
        dp[s.size()] = true;
        int N = s.size();
        for(int i = s.size()-1; i >= 0 ; i--){
            for(auto itr = len.begin(); itr != len.end(); itr++){
                string ss = s.substr(i, *itr);
                if(dp[min(i+*itr, N)] && h.find(ss) != h.end()){
                    dp[i] = true;
                    break;
                }
            }
        }
        return dp[0];
    }
};