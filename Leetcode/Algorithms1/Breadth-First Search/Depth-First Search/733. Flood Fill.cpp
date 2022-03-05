class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
     
        vector<vector<int>>visited(image.size(),vector<int>(image[0].size(),0));
        
        queue<pair<int,int>>pq;
        pq.push({sr,sc});
        visited[sr][sc]=1;
        
        while(pq.size()>0)
        {
            int i=pq.front().first;
            int j=pq.front().second;
            int t=i-1;
            int r=j-1;
            int s=i+1;
            int z=j+1;
            pq.pop();
            
            if(t>=0&&image[t][j]==image[i][j]&& visited[t][j]==0)
            {
                visited[i][j]=1;
                pq.push({t,j});
            }
            if(r>=0&&image[i][r]==image[i][j]&& visited[i][r]==0)
            {
                visited[i][r]=1;
                pq.push({i,r});
            }
            if(s<image.size()&&image[s][j]==image[i][j]&& visited[s][j]==0)
            {
                visited[s][j]=1;
                pq.push({s,j});
            }
            if(z<image[0].size()&&image[i][z]==image[i][j]&& visited[i][z]==0)
            {
                visited[i][z]=1;
                pq.push({i,z});
            }
            image[i][j]=newColor;
        }
        return image;
    }
};