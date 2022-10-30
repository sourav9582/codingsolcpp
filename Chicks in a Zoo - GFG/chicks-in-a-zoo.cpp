//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	long long int NoOfChicks(int n){
	    // Code here
long long int dp[n + 1];

     dp[0] = 0;

     dp[1] = 1;

     int pree = 0;

     long long int suum = 1;

     for(int i = 2; i <= n; i++){

         if(i >= 6) suum -= dp[pree++];

         dp[i] = suum * 2;

         suum += dp[i];

     }

     return suum;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int N;
		cin >> N;
		Solution obj;
		long long int ans = obj.NoOfChicks(N);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends