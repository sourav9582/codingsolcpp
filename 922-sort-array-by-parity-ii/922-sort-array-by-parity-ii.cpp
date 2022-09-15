class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>e,o;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                e.push_back(nums[i]);
            }
            else
            {
                o.push_back(nums[i]);
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                nums[i]=e[i/2];
            }
            else
            {
                nums[i]=o[(i-1)/2];
            }
        }
        return nums;
    }
};