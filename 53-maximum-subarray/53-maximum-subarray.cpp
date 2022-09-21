class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int re=nums[0];
        int maxr=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            maxr=max(nums[i],maxr+nums[i]);
            re=max(maxr,re);
        }
        return re;
    }
};