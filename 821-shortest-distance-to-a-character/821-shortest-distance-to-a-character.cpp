class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        // vector<int>ans, r;
        // for(int i=0;i<s.size();i++)
        // {
        //     if(s[i]==c)
        //     {
        //         ans.push_back(i);
        //     }
        // }
        // for(int i=0;i<s.size();i++)
        // {
        //     vector<int>a;
        //     for(int j=0;j<ans.size();j++)
        //     {
        //         a.push_back(i-ans[j]);
        //     }
        //     r.push_back(min(a.begin(), a.end()));
        // }
        // return r;
        vector<int>pos,ans;
        
      for(int i=0;i<s.length();i++)
          if(s[i]==c)
              pos.push_back(i);
      
        
      for(int i = 0 ;i<s.length();i++){
         vector<int>answer;
         for(int j = 0;j<pos.size();j++){
             answer.push_back(abs(i-pos[j]));
             
         }
          
         ans.push_back(*min_element(answer.begin(), answer.end())); 
           
      }
         
        return ans; 
    }
};