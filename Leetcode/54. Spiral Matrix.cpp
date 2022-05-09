class Solution {
public:
    void traverse(vector<vector<int>> &matrix,vector<int> &ans,vector<vector<bool>> &visited,int r,int c) {
        if(r>=0 && c>=0 && r<matrix.size() && c<matrix[0].size() && !visited[r][c]){
            ans.push_back(matrix[r][c]);
            visited[r][c]=true;
            if(!visited[r][c+1] && c!=matrix[0].size()-1){
                if(r==0){
                    traverse(matrix,ans,visited,r,c+1);
                }
                else{
                    if(find(visited[r-1].begin(),visited[r-1].end(),false)==visited[r-1].end()){
                        traverse(matrix,ans,visited,r,c+1);
                    }   
                }
            }
            if((c==matrix[0].size()-1 && r!=matrix.size()-1) || visited[r][c+1]){
                traverse(matrix,ans,visited,r+1,c);
            }
            if(r==matrix.size()-1 || visited[r+1][c]){
                traverse(matrix,ans,visited,r,c-1);
            }
            if(c==0 || visited[r][c-1]){
                traverse(matrix,ans,visited,r-1,c);
            }
        }
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<vector<bool>> visited(matrix.size(),vector<bool>(matrix[0].size(),false));
        vector<int> ans;
        traverse(matrix,ans,visited,0,0);
        return ans;
    }
};