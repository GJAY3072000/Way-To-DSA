class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sum1=0;
        int sum2=0;
        for(int i=0;i<gas.size();i++){
            sum1=sum1+gas[i];
        }
        for(int j=0;j<cost.size();j++){
            sum2=sum2+cost[j];
        }
        if(sum2>sum1)
            return -1;
        int curr_fuel=0,start=0;
        for(int i=0;i<cost.size();i++)
        {
            if(curr_fuel<0)
            {
                start=i;
                curr_fuel=0;
            }
            curr_fuel+=(gas[i]-cost[i]);
        }
        return start;
    }
};