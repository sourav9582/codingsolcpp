class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
       map<int,int>m;
        vector<int>v;
        for(auto num:nums)
            for(auto x:num)
            {
                m[x]++;
                if(m[x]==nums.size())
                {
                    v.push_back(x);
                }
            }
        sort(v.begin(),v.end());
        return v;
    }
};