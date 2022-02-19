class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        vector<long long> answer;
        if(num%3==0){
            long long x=num/3;
            answer.push_back(x-1);
            answer.push_back(x);
            answer.push_back(x+1); 
        }
        return answer;
        
    }
};