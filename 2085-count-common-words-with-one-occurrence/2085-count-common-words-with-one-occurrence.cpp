class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        // map<string, int> m1;
        // map<string, int> m2;
        // int count=0;
        // for(int i=0;i<words1.size();i++)
        // {
        //     m1[words1[i]]++;
        // }
        // for(int i=0;i<words2.size();i++)
        // {
        //     m2[words2[i]]++;
        // }
        // for(int i=0;i<words1.size();i++)
        // {
        //     if(m1.find(words1[i])!=m1.end() && m1[words1[i]]==1)
        //     {
        //         if(m2.find(words2[i])!=m1.end() && m2[words2[i]]==1)
        //         {
        //             count++;
        //         }
        //     }
        // }
        // return count;
        unordered_map<string,int> mp1;
        unordered_map<string,int> mp2;
        int len1=words1.size();
        int len2=words2.size();
        int count=0;
        for(int i=0;i<len1;i++)
        {
            mp1[words1[i]]++;
        }
        for(int i=0;i<len2;i++)
        {
            mp2[words2[i]]++;
        }
        for(int i=0;i<len1;i++)
        {
            if(mp1.find(words1[i])!=mp1.end() && mp1[words1[i]]==1)
            {
                if(mp2.find(words1[i])!=mp2.end() && mp2[words1[i]]==1)
                {
                    count++;
                }
            }
        }
        return count;
    }
};