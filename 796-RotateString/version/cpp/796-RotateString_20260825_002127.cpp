// Last updated: 8/25/2026, 12:21:27 AM
// return (s + s).find(goal) != string::npos;
1class Solution {
2public:
3    bool rotateString(string s, string goal) {
4        if (s.length() != goal.length()) {
5            return false;
6        }
7        return (s + s).find(goal) != string::npos;
8    }
9};