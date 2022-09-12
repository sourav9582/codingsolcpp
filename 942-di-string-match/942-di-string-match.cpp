class Solution {
public:
    vector<int> diStringMatch(string s) {
         int n=s.size();
        vector<int>perm(n+1);
       
        
        int start=0;
        int end=s.size();
    for(int i=0;i<n+1;i++){
            if(s[i]=='I'){
              perm[i]=start;
                start++;
            }
            if(s[i]=='D'){
                perm[i]=end;
                end--;
                
            }
            if(i==s.size()){
                perm[i]=start;
            }
        }
        
        return perm;
    }
};