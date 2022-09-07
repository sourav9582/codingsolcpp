class Solution {
public:
    int countAsterisks(string s) {
        int bc=0;
        int sc=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='|')
            {
                bc++;
            }
            else if(bc%2==0&&s[i]=='*')
            {
                sc++;
            }
        }
        return sc;
    }
};