class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        int n=words.size();
        vector<string>a={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        unordered_map<string,int>m;
        for(int i=0;i<n;i++)
        {
            string s="";
            for(int j=0;j<words[i].size();j++)
            {
                s+=a[words[i][j]-'a'];
            }
            m[s]++;
        }
        return m.size();
    }
};