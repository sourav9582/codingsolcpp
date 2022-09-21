class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<int>v;
        map<int,int>m;
        int dup=0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            
        }
        for(auto it:m)
        {
            if(it.second>1)
            {
                dup=it.first;
                break;
            }
        }
        return dup;
    }
};