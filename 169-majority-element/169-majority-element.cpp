class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>m;
        for(int i=0;i<nums.size();i++)
            
        {
            m[nums[i]]++;
        }
        int q=0;
        for(auto it:m)
        {
            // int q=0;
            if(it.second>(nums.size()/2))
            {
                q=it.first;
            }
        }
        return q;
        
    }
};