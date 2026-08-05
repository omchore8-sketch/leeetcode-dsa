// Last updated: 8/5/2026, 7:47:29 PM
1class Solution {
2public:
3    bool isPalindrome(int x) {
4        if(x < 0) {
5            return false;
6        }
7        
8        int rev = 0;
9        int num = x;
10        
11        while(num != 0) {
12            rev =(long long) rev * 10 + num % 10;
13            num /= 10;
14        }
15        
16        return rev == x;
17    }
18};