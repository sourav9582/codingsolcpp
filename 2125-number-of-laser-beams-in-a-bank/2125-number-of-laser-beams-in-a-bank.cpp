class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        vector<int>ans;
        int count=0;
        for(int i=0;i<bank.size();i++)
        {
            count=0;
            for(int j=0;j<bank[0].size();j++)
            {
                if(bank[i][j]=='1')
                {
                    count++;
                }
            }
            if(count>=1)
            {
                ans.push_back(count);
            }
        }
        if(ans.size()<=1)
        {
            return 0;
        }
        long long sum=0;
        for(int i=0;i<ans.size()-1;i++)
        {
            sum+=(ans[i]*ans[i+1]);
        }
        return sum;
    }
};