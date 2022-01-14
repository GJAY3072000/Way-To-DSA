class Solution {
public:
    bool buddyStrings(string A, string B) {
        if (A.size() != B.size() || A.empty()) return false;
        if (A != B)
        {
            int count = 0;
            char first = 'a', second = 'a';
            for (int i = 0; i < A.size(); i++)
            {
                if (A[i] == B[i]) continue;
                if (count >= 2) return false;
                if (count == 0)
                {
                    first = A[i];
                    second = B[i];
                    count++;
                    continue;
                }
                if (A[i] != second || B[i] != first) return false;
                count++;
            }
            return count == 2;
        }
        if (A.size() > 26) return true;
        int freq[26] = {};
        for (auto c: A)
        {
            if (freq[c - 'a'] == 1) return true;
            freq[c - 'a'] = 1;
        }
        return false;
        
    }
};