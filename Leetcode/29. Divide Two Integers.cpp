class Solution {
public:
    int divide(int dividend, int divisor) {
        if (divisor == 0) return INT_MAX;
        if (dividend == 0) return 0;
        if (dividend == INT_MIN && divisor == -1) return INT_MAX;
        if (dividend == INT_MAX && divisor == 1) return INT_MAX;
        try {
            int res = dividend * pow(divisor, -1);
            return res;
        } catch (...) { return INT_MAX; }
        
    }
};