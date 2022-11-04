//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C+

class Solution {
  public: 
string baseEquiv(int n, int m)
{
    for (int i = 2; i <= 32; i++)
    {
        int cnt = 0;
        int n1 = n;
        for (int j = 0; j < m; j++)
        {
            if (n1 == 0)
            {
                break;
            }
            n1 = n1 / i;
            cnt++;
        }

        if (n1 == 0 && cnt == m)
        {
            return "Yes";
        }
    }

    return "No";
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        Solution ob;
        cout<<ob.baseEquiv(n,m)<<endl;
    }
    return 0;
}

// } Driver Code Ends