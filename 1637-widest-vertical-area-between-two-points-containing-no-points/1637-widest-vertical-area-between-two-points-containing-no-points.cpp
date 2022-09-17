class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        vector<int> ans;
        int max;
        for(int i=0;i<points.size();i++)
        {
            ans.push_back(points[i][0]);
        }
        sort(ans.begin(),ans.end());
        max=ans[1]-ans[0];
        for(int i=1;i<ans.size()-1;i++)
        {
            if(ans[i+1]-ans[i]>max)
            {
                max=ans[i+1]-ans[i];
            }
        }
        return max;
    }
};