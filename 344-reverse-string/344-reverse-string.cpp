class Solution {
public:
    void reverseString(vector<char>& s) {
        int e=s.size()-1;
        int i=0;
        while(i<e)
        {
            swap(s[i],s[e]);
            i++;
            e--;
        }
    }
};