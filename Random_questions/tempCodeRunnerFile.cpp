#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	string s;
	string word;
	int t;
	cin>>t;
	while(t--){
		int result=0;
		cin>>s;
		cin>>word;
		int b=word.length();
		int c=s.length();
		map<char,int> a;
        for(int i = 0 ; i < c ; i++) {
            a[s[i]]=i+1;
        }
        for(int i = 1 ; i < b; i++) {
            result = result + abs(a[word[i-1]]-a[word[i]]);
        }
        cout << result << '\n';
	}
	return 0;
}


