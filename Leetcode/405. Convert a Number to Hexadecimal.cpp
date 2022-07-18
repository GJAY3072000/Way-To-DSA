class Solution {
public:
    string toHex(int num) {
        string ans = "";
        unsigned int num1 = num;
        if(num1 == 0)
        {
            ans += '0';
            return ans;
        }
        string temp;
        while(num1 > 0)
        {
            int n = num1 % 16;
            temp = to_string(n);
            if(n > 9)
            {
                ans += (n - 10) + 'a';
            }
            else
            {
                ans += temp;
            }
            num1 /= 16;
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};