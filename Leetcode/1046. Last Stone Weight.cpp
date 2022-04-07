class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> pq(stones.begin(), stones.end());
        while(pq.size() > 1){
            int first_no = pq.top();
            pq.pop();
            int second_no = pq.top();
            pq.pop();
            if(pq.empty()){
                pq.push(first_no - second_no);
                return pq.top();
            }
            if(first_no != second_no) {
                pq.push(first_no - second_no); 
            }
        }
        return pq.top();
    }
};