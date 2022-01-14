class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int x,y;
        
        /*-------------BRUTE FORCE APPROACH-----------------*/
/*        
        
      int m=v.size();
        int n=v[0].size();
        int temp[m][n];
        for(int i=0;i<m;i++)
            for(int j=0;j<n;j++)
                temp[i][j]=1;
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]==0)
                {
                for(int k=0;k<m;k++)
                    temp[k][j]=0;
                    
                    for(int k=0;k<n;k++)
                        temp[i][k]=0;
                }
               
            }
            
            
        }
        
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
               if(temp[i][j]==0)
                   v[i][j]=temp[i][j];
                else
                    v[i][j]=v[i][j];
            }
        }
        T.C =O(M*N*(M+N))    S.C=O(MN)
    */    
        
        /*-----------OPTIMAL APPROACH MAKE DUMMY ROW AND COLUMN---------*/
     
        
      /*  
        int m=v.size();
        int n=v[0].size();
        int row[m];
        int col[n];
        
        for(int i=0;i<m;i++)
            row[i]=false;
        
        
        for(int i=0;i<n;i++)
            col[i]=false;
        
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]==0)
                {
                    row[i]=true;
                    col[j]=true;
                }
            }
         }
        
         for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if( row[i]==true  ||  col[j]==true)
                {
                    v[i][j]=0;
                }
            }
         }
        
     time complexity   = O(N*M)

Space Complexity: O(M + N), for storing hash tables.

*/
        
        /*--------------------- PRO -OPTIMAL APPROACH-----------------------*/
          int col0 = 1, rows = v.size(), cols = v[0].size();

    for (int i = 0; i < rows; i++) {
        if (v[i][0] == 0) col0 = 0;
        for (int j = 1; j < cols; j++)
            if (v[i][j] == 0)
                v[i][0] = v[0][j] = 0;
    }

    for (int i = rows - 1; i >= 0; i--) {
        for (int j = cols - 1; j >= 1; j--)
            if (v[i][0] == 0 || v[0][j] == 0)
                v[i][j] = 0;
        if (col0 == 0) v[i][0] = 0;
        
    }
    }
};