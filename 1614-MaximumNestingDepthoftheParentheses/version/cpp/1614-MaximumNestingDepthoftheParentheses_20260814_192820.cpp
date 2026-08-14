// Last updated: 8/14/2026, 7:28:20 PM
// stack
1class Solution {
2public:
3    int maxDepth(string s) {
4stack<char> st;
5int ans =0;
6for(int i=0;i<s.length();i++){
7 if(s[i]=='('){
8  st.push(s[i]);  
9 }
10 else if(s[i]==')'){
11    st.pop();
12 }
13 ans=max(ans,(int)st.size());
14}
15 return ans;    
16    }
17};