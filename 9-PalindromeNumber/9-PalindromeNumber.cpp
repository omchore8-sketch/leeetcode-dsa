// Last updated: 8/6/2026, 7:38:31 PM
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) {
            return false;
        }
        
        int rev = 0;
        int num = x;
        
        while(num != 0) {
            rev =(long long) rev * 10 + num % 10;
            num /= 10;
        }
        
        return rev == x;
    }
};