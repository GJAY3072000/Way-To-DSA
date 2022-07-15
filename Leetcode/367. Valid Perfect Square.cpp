class Solution {
public:
    bool isPerfectSquare(int num) {
        long i=i*i;
        for (i=1;i*i<=num;i++){
            if (num%i==0 and num/i==i)
                return true;
        }
     return false;
    }
};