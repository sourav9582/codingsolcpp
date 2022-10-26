//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution{
public:
    int findMin(int n, char a[]){
        // code here
        if (n == 1) return 1;
        int cnttR = 0, cnttG = 0, cnttB = 0;
        for (int i = 0; i < n; i++) {
            if (a[i] == 'R') cnttR++;
            else if (a[i] == 'B') cnttB++;
            else cnttG++;
        }
        if (cnttR % 2 == 0 && cnttB % 2 == 0 && cnttG % 2 == 0)
            return 2;
        if (cnttR % 2 == 1 && cnttB % 2 == 1 && cnttG % 2 == 1)
            return 2;
        return 1;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        char a[n];
        for(int i = 0;i < n;i++)
            cin>>a[i];
        
        Solution ob;
        cout<<ob.findMin(n, a)<<"\n";
    }
    return 0;
}
// } Driver Code Ends