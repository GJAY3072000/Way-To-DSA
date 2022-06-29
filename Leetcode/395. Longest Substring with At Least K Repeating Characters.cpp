class Solution {
public:
       int longestSubstring(string s, int k) {
           return solve(s, 0, s.length(), k);
       }
    
       int solve(string s, int start, int end, int k){
         if(end-start < k){
            return 0;
          }
       unordered_map<char,int> map;
       for(int i = start;i<end;i++){
           map[s[i]]++;
       }
       for(int i = start;i<end;i++){
           if(map[s[i]] < k){
                 int j = i+1;
                 while(j<end && map[s[j]] < k){
                    j++;
                 }
                 return max(solve(s, start, i, k), solve(s, j, end, k));
           }
       }
       return end-start;
    }
};