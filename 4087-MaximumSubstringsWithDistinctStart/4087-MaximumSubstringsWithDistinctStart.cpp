// Last updated: 8/4/2026, 12:22:54 AM
class Solution {
public:
    int maxDistinct(string s) {
    int n=s.size();
    set<int> k;
    for(int i=0;i<n;i++){
    k.insert(s[i]);
    } 
    return k.size();    
    }
};