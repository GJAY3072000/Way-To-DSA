class Solution {
public:
    string convertToTitle(int columnNumber) {
        string ans = "";
        while(columnNumber>26) {
        int x = columnNumber%26;
        if(x==0) {
            x=26;
            columnNumber--;
        }
        ans = char((int)'A'+x-1) + ans;
        columnNumber/=26;
        }
        if(columnNumber) ans = char((int)'A'+columnNumber-1)+ans;
     return ans;
    }
};