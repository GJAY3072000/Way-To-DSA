class Solution {
public:
    string reverseVowels(string s) {
        int n = s.size();
        int l = 0;
        int r = n - 1;
        while(l < r){
            char lc = tolower(s[l]);
            char rc = tolower(s[r]);
            if(lc == 'a' || lc == 'e' || lc == 'i' || lc == 'o' || lc == 'u'){
                if(rc == 'a' || rc == 'e' || rc == 'i' || rc == 'o' || rc == 'u'){
                     swap(s[l], s[r]); l++; r--;
                }
                else {
                    r--;
                }
            }
            else
                l++;
        }
        return s;
    }
};