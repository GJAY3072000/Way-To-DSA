class Solution {
public:
    
    static bool compare(pair<int, int>& num1, pair<int, int>& num2){
        return
            num1.first < num2.first;
    }
    
    vector<pair<int,int>> change(vector<int>& mapping, vector<int>& nums){
        unordered_map<int,int> mp;
        for(int i=0;i<mapping.size();i++){
            mp[i]=mapping[i];
        }
        vector<pair<int,int>> vec;
        for(int j=0;j<nums.size();j++){
            string temp=to_string(nums[j]);
            int numb=0;
            for(int i=0;i<temp.size();i++){
                int x=(temp[i]-'0');
                numb=numb*10+mp[x];
            }
            vec.push_back({numb,nums[j]});
        }
        return vec;
    }

    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums){
        vector<int> result;
        vector<pair<int,int>> vec1;
        vec1=change(mapping,nums);
        sort(vec1.begin(),vec1.end(),compare);
        for(auto i:vec1){
            result.push_back(i.second);
        }
        return result;
    }
};