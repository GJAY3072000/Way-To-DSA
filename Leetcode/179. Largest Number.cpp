class Solution {
public:
    string largestNumber(vector<int>& nums) {
        string ans="";
			vector<string>v;
			int count=0;
			for(int i=0;i<nums.size();i++){
				string str=to_string(nums[i]);
				if(str=="0")count++;
				v.push_back(str);
			}
			if(count==v.size())return "0";
			sort(v.begin(),v.end(),[](string a,string b){
				return a+b>b+a ;
			});
			for(int i=0;i<v.size();i++) ans+=v[i];
			return ans;
    }
};