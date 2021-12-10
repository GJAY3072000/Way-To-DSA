class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;
        int j = b.size() - 1;
        auto carry = 0;
        string result = "";
        
        while (i >= 0 || j >= 0 || carry) {
            if (i >= 0 && a[i--] == '1') ++carry;
            if (j >= 0 && b[j--] == '1') ++carry;
            result.insert(0, 1, carry % 2 == 1 ? '1' : '0');
            carry /= 2;
        }
        
        return result;
    }
};