//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++



class Solution {
  public:
    int shortestPath(vector<vector<int>> &grid, pair<int, int> src,
                     pair<int, int> dest) {
        // code here
        
        int m=grid.size(),n=grid[0].size();
        queue<pair<int,int>>q;
        vector<int>dir={1,0,-1,0,1};
        q.push(src);
        grid[src.first][src.second]=-1;
        
        int dist=0;
        while(!q.empty()){
            int l=q.size();
            while(l--){
                pair<int,int>curr=q.front();
                q.pop();
                
                if(curr==dest) return dist;
                
                for(int i=0;i<4;i++){
                    int r=curr.first+dir[i],c=curr.second+dir[i+1];
                    if(r<0||r>=m||c<0||c>=n||grid[r][c]!=1)
                    continue;
                    
                    q.push({r,c});
                    grid[r][c]=-1;
                }
            }
            dist++;
        }
        return -1;
    }
};


//{ Driver Code Starts.
int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }

        pair<int, int> source, destination;
        cin >> source.first >> source.second;
        cin >> destination.first >> destination.second;
        Solution obj;
        cout << obj.shortestPath(grid, source, destination) << endl;
    }
}

// } Driver Code Ends