class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        deque<int>dq;
        for(int i=1;i<=m;i++)
        {
            dq.push_back(i);
        }
        vector<int>ans;
        for(int i=0;i<queries.size();i++)
        {
            for(int j=0;j<m;j++)
            {
                if(queries[i]==dq[j])
                {
                    int val=dq[j];
                    ans.push_back(j);
                    dq.erase(dq.begin()+j);
                    dq.push_front(val);
                }
            }
        }
        return ans;
    }
};