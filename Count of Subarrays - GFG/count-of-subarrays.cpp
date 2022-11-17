//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

#define ll long long


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// #define ll long long

	long countSubarray(int arr[], int n, int k) {

 

        // code here

         long ans=0;

 

 

 

        int i=0;

        int j=0;

        while(j<n)

        {

            if(arr[i]>k)

            {

                ans+=n-i;

                i++;

            }

            else if(arr[j]>k)

            {

                ans+=(n-j)*(j-i);

                i=j;

            }

            j++;

        }

        if(i<n&&arr[i]>k)ans+=1;

        return ans;

    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k, i;
        cin >> n >> k;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.countSubarray(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends