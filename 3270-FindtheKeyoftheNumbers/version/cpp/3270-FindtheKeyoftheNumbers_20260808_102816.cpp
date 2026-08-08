// Last updated: 8/8/2026, 10:28:16 AM
1class Solution {
2public:
3    int generateKey(int num1, int num2, int num3) {
4        int ans = 0, x = 1;
5        while(num1 > 0 || num2 > 0 || num3 > 0) {
6            int min_digit = min((num1 % 10) , (num2 % 10));
7            min_digit = min((num3 % 10) , min_digit);
8            ans += x * min_digit;
9            x *= 10;
10            num1 /= 10;
11            num2 /= 10;
12            num3 /= 10;
13        }
14        return ans;
15    }
16};