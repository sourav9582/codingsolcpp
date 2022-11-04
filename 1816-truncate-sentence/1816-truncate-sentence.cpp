class Solution {
public:
    string truncateSentence(string s, int k) {
        string q;
        int co=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]==' ')
            {
                co++;
            }
            if(co==k)
                break;
            q=q+s[i];
        }
        return q;
    }
};