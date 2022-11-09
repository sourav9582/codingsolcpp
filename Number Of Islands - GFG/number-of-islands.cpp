//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  
    class DisJointSet{
        public:
        
        vector<int> size,parent;
        
        DisJointSet(int n){
            size.resize(n+1,0);
            parent.resize(n+1);
            
            for(int i=0;i<=n;i++){
                parent[i] = i;
            }
        }
        
        int findpar(int node){
            
            if(node == parent[node]){
                return node;
            }
            
            return parent[node] = findpar(parent[node]);
        }
        
        
        void unionBysize(int u,int v){
            
            int ulp_u = findpar(u);
            int ulp_v = findpar(v);
            
            
            if(ulp_u==ulp_v){
                return;
            }
            
            if(size[ulp_u] > size[ulp_v]){
                parent[ulp_v] = ulp_u;
                size[ulp_u] += size[ulp_v];
            }
            
            else{
                parent[ulp_u] = ulp_v;
                size[ulp_v] += size[ulp_u];
            }
            
        }
        
        
    };
   
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {
        // code here
        
        DisJointSet ds(n*m);
        int vis[n][m];
        
        memset(vis , 0 , sizeof(vis));
        
        int cnt = 0;
        vector<int> ans;
        
        for(auto it : operators ){
            
            int row = it[0];
            int col = it[1];
            
            if(vis[row][col] == 1){
                ans.push_back(cnt);
                continue;
            }
            
            vis[row][col] = 1;
            cnt++;
            
            int dx[] = {-1,0,1,0};
            int dy[] = {0,1,0,-1};
            
            for(int i=0;i<4;i++){
                
                int adjr = row + dx[i];
                int adjc = col + dy[i];
                
                if(adjr>=0 && adjr<n && adjc>=0 && adjc<m){
                    if(vis[adjr][adjc]==1){
                        int nodeno = row*m + col;
                        int adjnodeno = adjr*m + adjc;
                        
                        if(ds.findpar(nodeno)!=ds.findpar(adjnodeno)){
                            cnt--;
                            ds.unionBysize(nodeno , adjnodeno);
                        }
                    }
                }
                
            }
            
            
            
            ans.push_back(cnt);
        }
        
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,k; cin>>n>>m>>k;
        vector<vector<int>> a;
        
        for(int i=0; i<k; i++){
            vector<int> temp;
            for(int j=0; j<2; j++){
                int x; cin>>x;
                temp.push_back(x);
            }
            a.push_back(temp);
        }
    
        Solution obj;
        vector<int> res = obj.numOfIslands(n,m,a);
        
        for(auto x : res)cout<<x<<" ";
        cout<<"\n";
    }
}

// } Driver Code Ends