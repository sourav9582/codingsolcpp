class Solution {
public:
    string defangIPaddr(string a) {
        string s;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]=='.')
            {
                s.push_back('[');
                s.push_back('.');
                s.push_back(']');
            }
            else{
                s.push_back(a[i]);
            }
        }
        return s;
    }
};