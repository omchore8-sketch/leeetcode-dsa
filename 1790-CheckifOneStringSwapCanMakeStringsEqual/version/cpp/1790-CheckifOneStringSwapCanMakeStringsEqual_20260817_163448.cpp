// Last updated: 8/17/2026, 4:34:48 PM
1class Solution {
2public:
3    bool areAlmostEqual(string s1, string s2) {
4        if (s1 == s2) return true;
5
6        vector<int> diff;
7        for (int i = 0; i < s1.length(); i++) {
8            if (s1[i] != s2[i]) {
9                diff.push_back(i);
10            }
11        }
12
13        
14        if (diff.size() == 2) {
15            int i = diff[0], j = diff[1];
16            return (s1[i] == s2[j] && s1[j] == s2[i]);
17        }
18
19        return false;
20    }
21};