class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> a;
        for(auto &i:nums)
        
            if (i<pivot)
            
                a.push_back(i);
            
            for(auto &i:nums)
            if(i==pivot)
                a.push_back(i);
        for(auto &i:nums)
            if(i>pivot)
                a.push_back(i);
            
        
        return a;
    }
};