class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int nn=nums.size();
        vector<int> ans(nn);
        for(int i=0;i<nn;i++){
            ans[i]=nums[nums[i]];
        }
        return ans;
    }
};