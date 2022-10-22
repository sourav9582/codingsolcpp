//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  
        // code here
          public:
    int fillingBucket(int Nn) {
        // code here
          int pre=1;

        if(Nn==1){

            return 1;

        }

        if(Nn==2){

            return 2;

        }

        int cur=2;

        int an=0;

        int mod = 100000000;

        for(int i=3;i<=Nn;i++){

            an=(cur+pre)%mod;

            pre=cur;

            cur=an;

            

        }

        return cur%mod;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;

        Solution ob;
        cout << ob.fillingBucket(N) << endl;
    }
    return 0;
}
// } Driver Code Ends