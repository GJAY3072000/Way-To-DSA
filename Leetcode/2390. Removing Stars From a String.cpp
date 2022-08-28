class Solution {
public:
    string removeStars(string s) {
        string res;
        for(char i: s){
            if(i=='*'){
                res.pop_back();
            }
            else{
                res+=i;
            }
        }
        return res;
    }
};