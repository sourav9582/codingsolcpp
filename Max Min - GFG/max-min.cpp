//{ Driver Code Starts
/* Driver program to test above function */

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution
{
   public:
    int findSum(int a[], int n)
    {
    	//code here.
    	int i,j,min,max;
	min = a[0];
	max = a[0];
	for(i=0;i<1;i++)
	{
		for(j=0;j<n;j++)
		{
			if(min>a[j])
			{
				min = a[j];
				//printf("%d\n",min);
				
			}
			if(max<a[j])
			{
				max = a[j];
				//printf("%d\n",max);
				//break;
			}
		}
	
		
	}
	return max+min;
    }

};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++)
	      cin>>arr[i];
	    Solution ob;  
	    int ans=ob.findSum(arr, n);
	    cout<<ans;
	    cout<<"\n";
	}
	return 0;
}

// } Driver Code Ends