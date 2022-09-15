class Solution {
public:
    int smallestEqual(vector<int>& nums) {
        // vector<int>a, s;
        // for(int i=0;i<nums.size();i++)
        // {
        //    // vector<int>s;
        //     if(i%10==nums[i])
        //     {
        //         a.push_back(nums[i]);
        //     }
        //     s.push_back(*min_element(a.begin(),a.end()));
        // }
        // return s;
        for(int i=0;i<nums.size();i++)
            if(i%10 == nums[i]) return i;
        return -1;
    }
};