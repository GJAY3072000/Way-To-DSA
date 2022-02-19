class Solution {
public:
    vector<long long> maximumEvenSplit(long long finalSum) {
        vector<long long> answer;
        if(finalSum%2!=0){
            return answer;
        }
        else{
             int j=2;
             long long sum=0;
             while(sum<=finalSum){
               answer.push_back(j);
               sum=sum+j;
               j=j+2;
             }
            int remove=sum-finalSum;
            for (auto i = answer.begin(); i<answer.end(); i++){
               if (*i  == remove){
                   answer.erase(i);
                   break;
               }
            }
        }
        return answer; 
    }
};