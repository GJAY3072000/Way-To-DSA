class Solution {
public:
    bool wordPattern(string pattern, string s) {
        map<char,string> mp;
        set<string> s11;
        int i=0,j=0,cnt=0;
        while(j<s.length()){
            int p = j;
            while(s[j]>='a' && s[j]<='z') j++;
            if(i>=pattern.size()) return false;
            if(mp.find(pattern[i])==mp.end()) {
                mp[pattern[i]] = s.substr(p,j-p);
                s11.insert(s.substr(p,j-p));
                cnt++;
            }
            if(mp[pattern[i]]!=s.substr(p,j-p)) return false;
            j++;
            i++;
        }
        return s11.size()==cnt && j>=s.length() && i>=pattern.size();
    }
};