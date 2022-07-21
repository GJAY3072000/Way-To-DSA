class Solution {
private:
    int maxPowerOfTwo(int num){
        int pow=1;
        while(num%2==0)
            pow*=2, num/=2;
        return pow;
    }
public:
    bool checkPerfectNumber(int num) {
        if(num==1)  return false;
        int max_pow_2 = maxPowerOfTwo(num);
        if(num/max_pow_2 != 2*max_pow_2 -1)
            return false;
        int prime = 2*max_pow_2 -1;
        for(int i=2; i*i<=prime; i++)
            if(prime%i==0)
                return false;
        return true;
    }
};