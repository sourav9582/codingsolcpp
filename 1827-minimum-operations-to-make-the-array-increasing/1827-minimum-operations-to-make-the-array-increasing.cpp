class Solution {
public:
    int minOperations(vector<int>& nums) {
        // sort(nums.begin(),nums.end());
        int anss=0;
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i+1]<=nums[i])
            {
                // nums[i+1]+=1;
                anss+=nums[i]-nums[i+1]+1;
                nums[i+1]=nums[i]+1;
            }
        }
        return anss;
    }
};