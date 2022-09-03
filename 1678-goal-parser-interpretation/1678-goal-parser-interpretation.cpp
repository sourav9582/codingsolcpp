class Solution {
public:
    string interpret(string c) {
        string s;
        for(int i=0;i<c.size();i++)
        {
            if(c[i]=='G')
            {
                s.push_back(c[i]);
            }
            if(c[i]=='(')
            {
                if(c[i+1]==')')
                {
                    s.push_back('o');
                }
                else{
                    s.push_back('a');
                    s.push_back('l');
                }
            }
            
        }
        return s;
    }
};