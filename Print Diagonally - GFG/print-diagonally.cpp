//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	vector<int> downwardDigonal(int n, vector<vector<int>> A)
	{
		// Your code goes here
		vector<int> V;
		 int ii =0, jj=0, ro=0, co=0;
		 while(ii<n && jj>=0)
		 {
		     V.push_back(A[ii][jj]);
		     ii++;
		     jj--;
		     if(ii==n){
		         ro++;
		         ii=ro;
		         jj=n-1;
		     }
		     else if(jj<0)
		     {
		         ii=0;
		         co++;
		         jj=co;
		     }
		 }
		 return V;
	}

};

//{ Driver Code Starts.



int main()
{

    
    int t;
    cin >> t;
    while(t--) 
    {
        int n;
        cin >> n;

        vector<vector<int>> A(n, vector<int>(n));

        for(int i = 0; i < n; i++)
        	for(int j = 0; j < n; j++)
        		cin >> A[i][j];

        Solution obj;
        vector<int> ans = obj.downwardDigonal(n, A);

        for(auto i:ans)
        	cout << i << " ";

	    cout << "\n";
    }

    return 0;
}

// } Driver Code Ends