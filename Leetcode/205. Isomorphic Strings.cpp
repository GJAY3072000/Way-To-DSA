class Solution {
public:
    bool isIsomorphic(string s, string t) {
       if(s.length()==1 && t.length()==1){
           if(s[0]==t[0]){
               return true;
           }
       }
       if(s.length()!=t.length()){
           return false;
       }
       int char1[256] = {0};
       int char2[256] = {0};
       for(int i=0;i<s.length();i++){
            if (char1[s[i]] == 0 && char2[t[i]] == 0) {
	            char1[s[i]] = t[i];
	            char2[t[i]] = s[i];
            } 
            else if (char1[s[i]] != t[i]) {
	            return false;
            }
        }
        return true;
    }
};