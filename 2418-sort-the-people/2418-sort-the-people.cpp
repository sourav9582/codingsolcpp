class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
       vector<pair<int,string>>va;
        for(int i=0;i<names.size();i++)
        {
            va.push_back({heights[i],names[i]});
        }
        sort(va.rbegin(),va.rend());
        vector<string>ans;
        for(int i=0;i<names.size();i++)
        {
            ans.push_back(va[i].second);
        }
        return ans;
    }
};