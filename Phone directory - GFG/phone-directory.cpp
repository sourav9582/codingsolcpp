//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


class Solution{
public:
   vector<vector<string>> displayContacts(int n, string contact[], string s)
    {
        vector<vector<string>>anns;
        map<string,bool>mmp;
        for(int i=0;i<n;i++)
        mmp[contact[i]]=true;
        for(int i=0;i<s.size();i++)
        {
            vector<string>v;
            for(auto it:mmp)
            {
                string str=it.first;
                if(it.second==true)
                {
                    if(str[i]==s[i])
                    {
                        v.push_back(str);
                    }else
                    {
                        mmp[str]=false;
                    }
                }
            }
            if(v.size()==0)
            anns.push_back({"0"});
            else
            anns.push_back(v);
        }
        return anns;

    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string contact[n], s;
        for(int i = 0;i < n;i++)
            cin>>contact[i];
        cin>>s;
        
        Solution ob;
        vector<vector<string>> ans = ob.displayContacts(n, contact, s);
        for(int i = 0;i < s.size();i++){
            for(auto u: ans[i])
                cout<<u<<" ";
            cout<<"\n";
        }
    }
    return 0;
}
// } Driver Code Ends