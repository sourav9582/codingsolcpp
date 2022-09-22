class Solution {
public:
    vector<int> getConcatenation(vector<int>& nn) {
        int n=nn.size();

        for(int i=0;i<n;i++){
		
            nn.push_back(nn[i]);
        }
        return nn;
    }
    };