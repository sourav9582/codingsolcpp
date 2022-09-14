class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int, int>ma;
        for(int i=0;i<nums.size();i++)
        {
            ma[nums[i]]++;
        }
        for(auto it:ma)
        {
            if(it.second==1)
            {
                return it.first;
            }
        }
        return -1;
    }
};