class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int c=0;
        for(int i=0;i<words.size();i++)
        {
            int ans=words[i].find(pref);
            if(ans==0)
            {
                c++;
            }
        }
        return c;
    }
};