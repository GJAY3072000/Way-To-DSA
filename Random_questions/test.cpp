#include <bits/stdc++.h>
using namespace std;
int32_t main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int tt;
    cin >> tt;
    while(tt--) {
        string alpha;
        cin >> alpha;
        string a;
        cin >> a;
        map<char,int> idx;
        for(int i = 0 ; i < alpha.length() ; i++) {
            idx[alpha[i]]=i;
        }
        int res=0;
        for(int i = 0 ; i < (int)a.length()-1 ; i++) {
            res += abs(idx[a[i]]-idx[a[i+1]]);
        }
        cout << res << '\n';
    }
    return 0;
}