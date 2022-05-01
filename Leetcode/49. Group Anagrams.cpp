class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> anagramsMap;
        for(int i=0; i<strs.size(); i++) {
            string temp = strs[i];
            sort(temp.begin(), temp.end());
            anagramsMap[temp].push_back(strs[i]);
        }
        vector<vector<string>> result;
        for(auto itr=anagramsMap.begin(); itr!=anagramsMap.end(); itr++) {
            result.push_back(itr->second);
        }
        return result;
    }
};