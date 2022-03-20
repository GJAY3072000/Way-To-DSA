class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& firstList, vector<vector<int>>& secondList) {
        vector<vector<int>> ans;
        int pt1=0;
        int pt2=0;
        while(pt1<firstList.size() && pt2<secondList.size()){
            int l=max(firstList[pt1][0],secondList[pt2][0]);
            int u=min(firstList[pt1][1],secondList[pt2][1]);
            if(l<=u){
                ans.push_back({l,u});
            }
            if(firstList[pt1][1]<secondList[pt2][1]){
                pt1++;
            }
            else{
                pt2++;
            }
        }
        return ans;
        
    }
};