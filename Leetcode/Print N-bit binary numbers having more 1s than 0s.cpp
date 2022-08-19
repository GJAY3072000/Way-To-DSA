//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:	
    void solve(int ones,int zeros,int N,string op,vector<string> &v){
        if(N==0){
            v.push_back(op);
            return;
        }
        string op1=op;
        op1.push_back('1');
        solve(ones+1,zeros,N-1,op1,v);
        if(ones>zeros){
            string op2=op;
            op2.push_back('0');
            solve(ones,zeros+1,N-1,op2,v);
        }
    }
	vector<string> NBitBinary(int N)
	{
	    // Your code goes here 
	    vector<string> v;
	    string op="";
	    int ones=0;
	    int zeros=0;
	    solve(ones,zeros,N,op,v);
	    return v;
	}
};

//{ Driver Code Starts.

int main() 
{
   	

   	ios_base::sync_with_stdio(0);
    cin.tie(NULL);
    cout.tie(NULL);
   
   	int t;
   	cin >> t;
   	while(t--)
   	{
   		int n;
   		cin >> n;
        Solution ob;
   		vector<string> ans = ob.NBitBinary(n);

   		for(auto i:ans)
   			cout << i << " ";

   		cout << "\n";
   	}

    return 0;
}
// } Driver Code Ends