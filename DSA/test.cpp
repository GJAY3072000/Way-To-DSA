#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false);   cin.tie(NULL); cout.tie(NULL);
#define endl "\n";
#define mod 1000000007
#define loop(i,s,n)  for(ll i=s;i<n;i++)
#define test  ll t; cin>>t; while(t--)
#define p push_back
#pragma GCC target ("avx2")
#pragma GCC optimization ("O3")
#pragma GCC optimization ("unroll-loops")
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
typedef long long ll;
int main()
{test{
    
ll n,i,j,k,count=0,sum=1,f=0;

cin>>n>>j>>k;
ll a,b;
a=min(n,j);
b=max(n,j);

int z=b/a;
if(b%a!=0)
{z++;}

if(z-1<=k)
{cout<<"YES"<<endl}
else{cout<<"No"<<endl}}
  return 0;
}
