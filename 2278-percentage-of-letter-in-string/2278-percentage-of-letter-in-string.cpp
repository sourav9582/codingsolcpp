class Solution {
public:
    int percentageLetter(string s, char letter) {
        map<char,int>m;
        int r=0;
        for(char c:s)
        {
            if(c==letter)
            {
                m[letter]++;
            }
        }
        r=(m[letter]*100)/s.size();
        return r;
    }
};