class Solution {
    vector<int> intersectionX(int ax1, int ax2, int bx1, int bx2)
    {
        unordered_set<int> res;
        
        if (ax1 >= bx1 and ax1 <= bx2)
            res.insert(ax1);
        if (ax2 >= bx1 and ax2 <= bx2)
            res.insert(ax2);
        
        if (res.size() == 2)
        {
            vector<int> v(res.begin(),res.end());
            return v;
        }
        
        if (bx1 >= ax1 and bx1 <= ax2)
            res.insert(bx1);
        
        if (res.size() == 2)
        {
            vector<int> v(res.begin(),res.end());
            return v;
        }
        
        if (bx2 >= ax1 and bx2 <= ax2)
            res.insert(bx2);
        
        if (res.size() == 2)
        {
            vector<int> v(res.begin(),res.end());
            return v;
        }
        else
            return {};
    }
    
    vector<int> intersectionY(int ay1, int ay2, int by1, int by2)
    {
        unordered_set<int> res;
        
        if (ay1 >= by1 and ay1 <= by2)
            res.insert(ay1);
        if (ay2 >= by1 and ay2 <= by2)
            res.insert(ay2);
        
        if (res.size() == 2)
        {
            vector<int> v(res.begin(),res.end());
            return v;
        }
        
        if (by1 >= ay1 and by1 <= ay2)
            res.insert(by1);
        
        if (res.size() == 2)
        {
            vector<int> v(res.begin(),res.end());
            return v;
        }
        
        if (by2 >= ay1 and by2 <= ay2)
            res.insert(by2);
        
        if (res.size() == 2)
        {
            vector<int> v(res.begin(),res.end());
            return v;
        }
        else
            return {};
    }
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        vector<int> iX = intersectionX(ax1,ax2,bx1,bx2);
        vector<int> iY = intersectionY(ay1,ay2,by1,by2);
        
        int intersectionArea = 0;
        
        if (iX.size() == 2 and iY.size() == 2)
            intersectionArea = abs(iX[0]-iX[1]) * abs(iY[0]-iY[1]);
        
        return (abs(ax2-ax1) * abs(ay2-ay1)) + (abs(bx2-bx1) * abs(by2-by1)) - intersectionArea;
    }
};