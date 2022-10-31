//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
     vector<int> satisfyEqn(int Arr[], int N) {
        // code here
        unordered_map<int,pair<int,int>>mmp;
        vector<int>anns;
        for(int i=0;i<N-1;i++)
        {
            for(int j=i+1;j<N;j++)
            {
                int sum=Arr[i]+Arr[j];
                if(mmp.find(sum)!=mmp.end())
                {
                    if(mmp[sum].first!=i && mmp[sum].second!=i && mmp[sum].first!=j && mmp[sum].second!=j)
                    {
                        vector<int>v={mmp[sum].first,mmp[sum].second,i,j};
                        if(anns.size()==0 || anns>v)
                        anns=v;
                    }
                }
                else
                mmp[sum]={i,j};
            }
        }
        if(anns.empty()){
        vector<int>v={-1,-1,-1,-1};
        return v;
        }
        return anns;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        
        cin>>N;
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        vector<int> ptr = ob.satisfyEqn(A,N);
        
        cout<<ptr[0]<<" "<<ptr[1]<<" "<<ptr[2]<<" "<<ptr[3]<<endl;
    }
    return 0;
}
// } Driver Code Ends