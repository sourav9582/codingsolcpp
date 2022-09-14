class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        map<int,int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        set<int>s;
        for(auto n:m)
        {
            s.insert(n.second);
        }
        if(m.size()==s.size())
        {
            return true;
        }
        else
            return false;
    }
};