class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>S,T;
        for(auto c:s){
            if(c=='#' and !S.empty()){
                S.pop();
            }else if(c!='#'){
                S.push(c);
            }
        }
        for(auto c:t){
            if(c=='#' and !T.empty()){
                T.pop();
            }else if(c!='#'){
                T.push(c);
            }
        }
        return S==T;
    }
};