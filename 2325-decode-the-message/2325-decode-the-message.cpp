class Solution {
public:
    string decodeMessage(string key, string message) {
        map<char,char>m;
        char c='a';
        for(int i=0;i<key.size();i++)
        {
            if(key[i]==' ')
            {
                continue;
            }
            else if(m.find(key[i])==m.end())
            {
                m[key[i]]=c++;
            }
        }
        for(int i=0;i<message.size();i++)
        {
            if(message[i]!=' ')
            {
                message[i]=m[message[i]];
            }
            
        }
        return message;
    }
};