class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        bool flag = false;
        for(int i = 0; i < intervals.size(); i++){
            if(!flag){
                if(intervals[i][0] < newInterval[0]){
                    if(intervals[i][1] >= newInterval[0]){
                        intervals[i][1] = max(intervals[i][1], newInterval[1]);
                        flag = true;
                    }
                    ans.push_back(intervals[i]);
                }
                else{
                    ans.push_back(newInterval);
                    flag = true;
                    i--;
                }    
            }
            else{
                if(ans.back()[1] >= intervals[i][0]) ans.back()[1] = max(ans.back()[1], intervals[i][1]);
                else ans.push_back(intervals[i]);
            }
        }
        if(!flag)
            ans.push_back(newInterval);
        return ans;
    }
};