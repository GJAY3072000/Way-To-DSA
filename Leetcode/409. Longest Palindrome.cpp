class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char,int> store;
        int count = 0;
        for(char c:s){
            if(store.find(c) != store.end()){
                count +=2;
                store.erase(store.find(c));
            }else
              store[c]++;
        }
        if(store.size() >0)count++;
        return count;
    }
};