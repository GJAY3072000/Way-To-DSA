class Solution {
private:
    int digitSum(int num){
        if(num==0) return 0;
        return num%10 +digitSum(num/10);
    }
public:
    int countEven(int num) {
        int cnt=0;
        for(int i=1;i<=num;i++){
            if(digitSum(i)%2==0) cnt++;
        }
        return cnt;
        
    }
};