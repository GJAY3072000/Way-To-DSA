class Solution {
public:
    string decodeString(string s) {
        stack<char> st;
        string ans="";
        for(int i=0;i<s.length();i++){
            if(s[i]==']'){
                string temp;
                while(st.top()!='['){
                    temp.push_back(st.top());
                    st.pop();
                }
                st.pop();
                reverse(temp.begin(),temp.end());
                string num;
                while(!st.empty() and (st.top()>='0' and st.top()<='9')){
                    num.push_back(st.top());
                    st.pop();
                }
                reverse(num.begin(),num.end());
                int n=stoi(num);
                for(int i=0;i<n;i++){
                    for(int j=0;j<temp.length();j++){
                        st.push(temp[j]);
                    }
                }
            }else{
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};