class Solution {
public:

	bool palindromechecker(string str){

		int s = 0;
		int e = str.size()-1;

		while(s < e){
			if(str[s] != str[e])  return false;
			s++;
			e--;
		}

		return true;

	}

	void solve(vector<vector<string>> &ans, vector<string> &temp, int ind, string s){

		if(ind == s.size()){
			ans.push_back(temp);
			return;
		}

		for(int i = ind; i < s.size(); i++){
			string str = s.substr(ind, i-ind+1);
			if(palindromechecker(str)){
				temp.push_back(str);
				solve(ans, temp, i+1, s);
				temp.pop_back();
			}
		}
	}

	vector<vector<string>> partition(string s) {

		vector<string> temp;
		vector<vector<string>> ans;
		solve(ans, temp, 0, s);
		return ans;
	}
};