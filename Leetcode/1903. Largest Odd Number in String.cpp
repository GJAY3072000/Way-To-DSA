class Solution {
public:
    string largestOddNumber(string num) {
        while(num.size()){
            if(num.back()-'0' & 1){
                return num;
            }
            else
                num.pop_back();
        }
        return "";
    }
};