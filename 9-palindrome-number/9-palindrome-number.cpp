class Solution {
public:
    bool isPalindrome(int x) {
        int y = x;
long long sum = 0;
while(x>0){
sum = sum * 10 + x % 10;
x = x /10;
}
return y==sum;
    }
};