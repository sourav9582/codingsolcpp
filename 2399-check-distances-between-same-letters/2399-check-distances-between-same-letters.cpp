class Solution {
public:
    bool checkDistances(string s, vector<int>& distance) {
        vector<int> v(26,-1);
        for(int i=0;i<s.size();i++)
        {
            int x=s[i]-'a';
            if(v[x]!=-1 && (i-v[x]-1)!=distance[x])
            {
                return false;
            }
            v[x]=i;
        }
        return true;
    }
};