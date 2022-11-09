//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++


class Solution{
public:
      string maxSum(string w,char x[], int b[],int n){
          // code here  
          unordered_map<char,int>mp;
          for(int i=0;i<n;i++){
              mp[x[i]] = b[i];
          }
          
          string ans = "";
          string s = "";
          
          if(w.size() == 1){
              return w;
          }
          
          
          int sum = 0;
          int curr = 0;
          
          for(int i=0;i<w.size();i++){
              if(mp.count(w[i])){
                  curr += mp[w[i]];
              }
              else{
                  curr += w[i];
              }
              
              if(curr < 0){
                  curr = 0;
                  s = "";
              }
              else{
                  s += w[i];
              }
              
              if(sum<curr){
                  ans = s;
                  sum = curr;
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
        string w;
        cin>>w;
        int n;
        cin>>n;
        char x[n];
        int b[n];
        for(int i = 0;i<n;i++)
            cin>>x[i];
        for(int i = 0;i<n;i++)
            cin>>b[i];
        Solution ob;
        cout << ob.maxSum(w,x,b,n) << endl;
    }
    return 0; 
}
// } Driver Code Ends