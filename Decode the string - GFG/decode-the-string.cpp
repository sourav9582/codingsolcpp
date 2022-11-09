//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++


class Solution{
public:
    string decodedString(string s){
        // code here
        stack<char> sChar;
        stack<int> sInt;
        string result="",temp="";
        for(int i=0;i<s.length();i++)
        {
            int n=0;
            if(s[i]>='1'&&s[i]<='9'){
                while(s[i]>='0'&&s[i]<='9')
                {
                    n=n*10+s[i]-'0';
                    i++;
                }
                sInt.push(n);
                i-=1;
            }
            else if(s[i]==']')
            {
                int cntOfoccr=0;
                if(sInt.empty()==false)
                {
                    cntOfoccr=sInt.top();
                    sInt.pop();
                }
                while(sChar.empty()==false&&sChar.top()!='[')
                {
                    temp=sChar.top()+temp;
                    sChar.pop();
                }
                sChar.pop();
                for(int i=0;i<cntOfoccr;i++)
                    result+=temp;
                for(int i=0;i<result.length();i++)
                    sChar.push(result[i]);
                result=temp="";
            }else{
                sChar.push(s[i]);
            }
        }
        while(sChar.empty()==false)
        {
            result=sChar.top()+result;
            sChar.pop();
        }
        return result;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.decodedString(s)<<"\n";
    }
    return 0;
}
// } Driver Code Ends