//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    public:
    int longestPerfectPiece(int arr[], int N) {
        // code here
        multiset<int> m;
         m.insert(arr[0]);
         int  ans=1;
         int start=0; 
         for(int i=1;i<N;i++)
         {m.insert(arr[i]);
         
         auto its=m.begin();
         auto itr=m.end();
         itr--;
         if(abs(*its - *itr) <=1)
         {
             ans=max(ans,i-start+1);
             continue;
         }
         else
         {
             for( ;start<i;start++)
             {
                 m.erase(m.find(arr[start]));
                 
                 //check
                  its=m.begin();
         itr=m.end();
         itr--;
         if(abs(*its - *itr) <=1)
         {
             start++;
             break;
         }
             }
         }
             
         }
         return ans;
    }

};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];

        Solution ob;
        cout << ob.longestPerfectPiece(arr,N) << endl;
    }
    return 0;
}
// } Driver Code Ends