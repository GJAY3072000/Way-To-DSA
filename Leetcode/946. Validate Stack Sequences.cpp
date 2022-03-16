class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i1=0;
        int i2=0;
        for(int val:pushed){
            pushed[i1]=val;
            while(i1>=0 && pushed[i1]==popped[i2])
                i2++,i1--;
            i1++;
        }
        if(i1==0)
            return true;
        else
            return false;
        
    }
};