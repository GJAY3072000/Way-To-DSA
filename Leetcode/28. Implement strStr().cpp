class Solution {
public:
	int strStr(string haystack, string needle) {
		int needle_len = needle.length();
		int haystack_len = haystack.length();
		if(needle_len==0){
			return 0;
		}
		int j = 0;
		for(int i = 0 ; i < haystack_len ; i++){

			if(haystack[i] == needle[j]){
				j++;
			}else{
				i = i-j;
				j = 0;
			}
			if(j==needle_len){
				return i - j +1 ;
			}

		}
		return -1;
	}
};



// 2nd Approach Using z function 
class Solution {
public:
    vector<int> z_function(string s) {
    int n = (int) s.length();
    vector<int> z(n);
    for (int i = 1, l = 0, r = 0; i < n; ++i) {
        if (i <= r)
            z[i] = min (r - i + 1, z[i - l]);
        while (i + z[i] < n && s[z[i]] == s[i + z[i]])
            ++z[i];
        if (i + z[i] - 1 > r)
            l = i, r = i + z[i] - 1;
    }
    return z;
}
    
    int strStr(string haystack, string needle) {
        string new_string = needle+'$'+haystack;
        vector<int> z =z_function(new_string);
        for(int i=0;i<new_string.size();i++){
            if(z[i] == needle.size()){
                return (i-(int)needle.size()-1);
            }
        }
        return -1;
    }
};