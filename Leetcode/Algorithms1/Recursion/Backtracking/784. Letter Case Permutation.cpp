class Solution {
public:
    void solve(string S, vector<string>&ans,int i) {
        if(i == S.size()) { 
            ans.push_back(S);
            return;
        }
        
        if(isalpha(S[i])) { 
            S[i] = toupper(S[i]);
            solve(S,ans,i+1);
            S[i] = tolower(S[i]);
            solve(S,ans,i+1);
        }
        else { 
            solve(S,ans,i+1);
        }
    }
    vector<string> letterCasePermutation(string S) {
        vector<string>ans;
        solve(S,ans,0);
        return ans;
    }

};