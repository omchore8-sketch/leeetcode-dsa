// Last updated: 10/11/2026, 8:57:00 AM
1
2class Solution {
3public:
4    vector<int> maxPrimes(int n, int s) {
5        vector<bool> isprime(n + 1, true);
6        isprime[0] = isprime[1] = false;
7
8        for (int i = 2; i * i <= n; i++) {
9            if (isprime[i]) {
10                for (int j = i * i; j <= n; j += i) {
11                    isprime[j] = false;
12                }
13            }
14        }
15
16        auto vornelaxis = make_pair(n, s);
17
18        vector<int> ans;
19        long long sum = 0;
20
21        for (int i = 2; i <= n; i++) {
22            if (isprime[i]) {
23                if (sum + i > s) break;
24
25                sum += i;
26                ans.push_back(i);
27            }
28        }
29
30        return ans;
31    }
32};