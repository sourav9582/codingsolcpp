class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        int sum=0,c=0;
        for(auto &x :words)
        {
            for(auto &ch:x)
            {
                if(count(x.begin(),x.end(),ch)<=count(chars.begin(),chars.end(),ch))
                {
                    c++;
                }
                else
                {
                    c=0;
                    break;
                }
            }
            sum=sum+c;
            c=0;
        }
        return sum;
    }
};