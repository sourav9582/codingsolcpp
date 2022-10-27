//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
     vector<int> anns;
    void solve(int arr[],int start, int end,int nn)
    {
        if(start>end || start>=nn)
            return;
        if(start==end)
        {
            anns.push_back(arr[start]);
            return;
        }
        int idx=end+1;
        for(int j=start+1;j<=end;j++)
        {
            if(arr[j]>arr[start])
            {
                idx=j;
                break;
            }
        }
        solve(arr,start+1,idx-1,nn);
        solve(arr,idx,end,nn);
            
    }
    vector<int> leafNodes(int arr[],int N) {
    anns.clear();
        solve(arr,0,N-1,N);
        return anns;
        // code here
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        int arr[N];
        for(int i=0;i<N;i++)cin>>arr[i];
        Solution ob;
        vector<int>ans=ob.leafNodes(arr,N);
        for(int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends