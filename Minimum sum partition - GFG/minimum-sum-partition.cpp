//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends



class Solution{

  int solve(int arr[],int n,int sum,int index,vector<vector<int>> &dp)
  {
      if(index == 0 )
      {
          return dp[index][sum]=((sum >= arr[index] )?arr[index]:0);
      }
      
      if(dp[index][sum]!=-1)
        return dp[index][sum];
        
      int ans=0;
      if(arr[index]<=sum)
      {
          ans = solve(arr,n,sum-arr[index],index-1,dp) + arr[index];
      }
      ans = max(ans, solve(arr,n,sum,index-1,dp));
      
      return dp[index][sum]=ans;
  }
  public:
  
	int minDifference(int arr[], int n)  { 
	    // Your code goes here
	    // i  am gaoing to use dp
	    
	    int sum =0;
	    for(int i=0;i<n;i++)
	    {
	        sum += arr[i];
	    }
	    int wholeSum = sum;
	    sum  = sum/2;
	    vector<vector<int>> dp(n,vector<int> (sum+1,-1));
	    int ans = solve(arr,n,sum,n-1,dp);
	   // for(int i=0;i<n;i++)
	   //     for(int j=0;j<sum;j++)
	    
	   //     cout << dp[i] << " ";
	   //cout <<endl;
	    return (wholeSum-2*ans);
	    
	} 
};


//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends