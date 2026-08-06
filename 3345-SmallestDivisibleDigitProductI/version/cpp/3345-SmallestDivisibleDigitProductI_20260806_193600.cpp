// Last updated: 8/6/2026, 7:36:00 PM
1class Solution {
2public:
3    int product(int x) {
4        int p = 1;
5        while (x > 0) {
6            p *= x % 10;
7            x /= 10;
8        }
9        return p;
10    }
11
12    int smallestNumber(int n, int t) {
13        while (product(n) % t != 0) {
14            n++;
15        }
16        return n;
17    }
18};