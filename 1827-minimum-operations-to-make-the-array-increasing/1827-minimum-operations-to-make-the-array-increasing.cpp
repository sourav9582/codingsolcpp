class Solution {
public:
    int minOperations(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]<=nums[i])
            {
                // nums[i+1]+=1;
                ans+=nums[i]-nums[i+1]+1;
                nums[i+1]=nums[i]+1;
            }
        }
        return ans;
    }
};