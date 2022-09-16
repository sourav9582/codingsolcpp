class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int f=0,s=0, t=0;
        for(char ch:firstWord) f=10*f+(ch-'a');
        for(char ch:secondWord) s=10*s+(ch-'a');
        for(char ch:targetWord) t=10*t+(ch-'a');
        return f+s==t;
    }
};