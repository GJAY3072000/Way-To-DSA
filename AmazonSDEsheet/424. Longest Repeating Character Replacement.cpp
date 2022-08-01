class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int l=0,r=0;
        int maxFreq=0;
        int windowLength=0;
        int ans = windowLength;
        while(r<s.size()){
            mp[s[r]]++;
            windowLength=r-l+1;
            maxFreq=max(maxFreq,mp[s[r]]);
            if(windowLength-maxFreq<=k){
                ans=max(ans,windowLength);
            }
            else{
                mp[s[l]]--;
                l++;
            }
            r++;
        }
        return ans;
    }
};