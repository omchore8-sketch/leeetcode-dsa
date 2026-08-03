// Last updated: 8/3/2026, 11:10:37 PM
// set data structure
1class Solution {
2public:
3    int maxDistinct(string s) {
4    int n=s.size();
5    set<int> k;
6    for(int i=0;i<n;i++){
7    k.insert(s[i]);
8    } 
9    return k.size();    
10    }
11};