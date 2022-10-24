//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

struct alphanumeric {
    string name;
    int count;
};
class Solution {
  public:
    vector<alphanumeric> sortedStrings(int N, vector<string> A) {
        // use map
        map<string, int> mppp;
        for(int i = 0; i < A.size(); ++i) {
            mppp[A[i]]++;
        }
        
        // now store back the map items in another vector of type alphanumeric
        vector<alphanumeric> anns;
        alphanumeric tmp;
        for(map<string, int>::iterator itr = mppp.begin(); itr != mppp.end(); ++itr) {
            tmp.name = itr->first;
            tmp.count = itr->second;
            anns.push_back(tmp);
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
        cin >> N;
        cin.ignore();
        vector<string> v;
        for (int i = 0; i < N; i++) {
            string s;
            getline(cin, s);
            v.push_back(s);
        }
        Solution ob;
        vector<alphanumeric> ans = ob.sortedStrings(N, v);
        for (auto u : ans) cout << u.name << " " << u.count << "\n";
    }
}
// } Driver Code Ends