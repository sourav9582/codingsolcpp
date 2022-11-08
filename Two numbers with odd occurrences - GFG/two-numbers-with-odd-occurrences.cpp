//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
    public:
    vector<long long int> twoOddNum(long long int a[], long long int n)  
    {
        int x = 0;
        for(int i=0; i<n; i++)
        {     
            x=x^a[i];
        }
        
        // find first set bit of final xor (x)
        // finding first set bit of a number is done by - [n & ~(n-1)]
        int fsb = x & ~(x-1);
        int f=0, s=0;   // these two are the bits whose xor is (x) i.e.
                        // bits with odd occurences.
        
        for(int i=0; i<n; i++)
        {
            if(fsb&a[i])
            {
                f=f^a[i]; // this is grouping going on one number is from the group
                          // starting from 0-- other starts from 1--.
            }
            else
            {
                s=s^a[i];
            }
        }
        if(f>s)
        {
            return {f,s};
        }
        else
        {
            return {s,f};
        }
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int N;
        cin>>N;
        long long int Arr[N];
        for(long int i = 0;i < N;i++)
        cin>>Arr[i];
        Solution ob;
        vector<long long int>ans=ob.twoOddNum(Arr,N);
        for(long long int i=0;i<ans.size();i++)cout<<ans[i]<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends