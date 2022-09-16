class Solution {
public:
    bool areOccurrencesEqual(string s) {
        map<char,int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int check=m[s[0]];
        for(auto it:m)
        {
            if(it.second!=check)
            {
                return false;
            }
        }
        return true;
        
    }
};