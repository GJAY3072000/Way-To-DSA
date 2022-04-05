class Solution {
public:
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        int dest=graph.size()-1;
        vector<vector<int>> ans;
        vector<int> temp;
        queue<vector<int>> q;
        q.push({0}); 
        while(!q.empty()){
            temp=q.front();
            q.pop();
            if(temp.back()==dest)
                ans.push_back(temp);
            else{
                for(auto x:graph[temp.back()]){
                    vector<int> v(temp);
                    v.push_back(x);
                    q.push(v);
                } 
            }
        }
        return ans;
    }
};