//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function template for C++


class Solution{   
public:
    int numberOfSubsequences(string S, string W){
        // code here 
        
        int n = S.length();
        int m = W.length();
        int j = 0, ans = 0;
        vector<int> vis(n, 0);
        
        
        for(int k=0;k<n;k++){
            if(S[k] == W[0] and !vis[k]){
                for(int i=k;i<n;i++){
                    if(!vis[i] and S[i] == W[j]){
                        j++;
                        vis[i] = 1;
                    }    
                    if(j == m){
                        ans++;
                        break;
                        // j = 0;
                    }
                }//for
                j = 0;
            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        string S,W;
        cin >> S >> W;
        Solution ob;
        cout << ob.numberOfSubsequences(S,W) << endl;
    }
    return 0; 
} 


// } Driver Code Ends