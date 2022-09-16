class Solution {
public:
    char repeatedCharacter(string s) {
        map<char, int>m;
       for(int i = 0; i < s.length();i++){
        if(m[s[i]] == 1){
            // if the character already occured once then return  it.......
            return s[i];
        }else{
            // if its first time intialize it 1
            m[s[i]]++;
        }
    }
    // default return
    return 'a';
    }
};