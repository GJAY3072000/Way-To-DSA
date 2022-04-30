class Solution {
public:
void solvedfs(string s, string d, map<string,vector<pair<string,double>>>& m, set<string> &vis, double &anss, double temp){
        if(vis.find(s)!=vis.end()){
            return ;
        }
        else{
            vis.insert(s);
            if(s==d){
                anss=temp;
                return ;
            }
            else{
                for(auto it : m[s]){
                    solvedfs(it.first, d, m, vis, anss, temp*it.second);
                }
            }
        }
    }
    vector<double> calcEquation(vector<vector<string>>& e, vector<double>& v, vector<vector<string>>& q) {
        vector<double> ans;
        map<string,vector<pair<string, double>>> mp;
        for(int i=0; i<e.size(); i++){
            mp[e[i][0]].push_back({e[i][1], v[i]});
            mp[e[i][1]].push_back({e[i][0], 1/v[i]});
        }
        for(int i=0; i<q.size(); i++){
            string s = q[i][0];
            string d = q[i][1];
            double anss = -1.0;
            set<string> vis;
            if(mp.find(s)!=mp.end()){
                solvedfs(s, d, mp, vis, anss, 1.0);
            }
            ans.push_back(anss);
        }
        return ans;
    }
};