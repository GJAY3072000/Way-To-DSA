class Solution {
public:
    long long minimalKSum(vector<int>& nums, int k) {
        priority_queue<int,vector<int>,greater<int>> pq;
        long long sum=((long long)k*(k+1))/2;    
        for(int x:nums){
            pq.push(x);
        }
        while(!pq.empty() && k>=pq.top()){   
            k=k+1;
            int temp=pq.top();
            pq.pop();
            while(!pq.empty() && temp==pq.top()){
                pq.pop();
            }
            sum=sum-temp+k;
        }
        return sum;
    }
};