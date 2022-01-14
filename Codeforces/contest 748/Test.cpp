#include<bits/stdc++.h>

using namespace std;

int main(){
    long long m;
    cin >> m;
    while(m--) {
        long long a;
        cin >> a;
        long long b;
        cin >> b;
        long long c;
        cin >> c;
        cout << max(0LL,1+max(b,c)-a) << ' ' << max(0LL,1+max(a,c)-b) << ' ' << max(0LL,1+max(b,a)-c) << '\n';
    }
    return 0;
    
}


