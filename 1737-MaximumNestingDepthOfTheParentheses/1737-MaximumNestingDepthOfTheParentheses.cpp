// Last updated: 8/15/2026, 9:35:31 PM
class Solution {
public:
    int maxDepth(string s) {
stack<char> st;
int ans =0;
for(int i=0;i<s.length();i++){
 if(s[i]=='('){
  st.push(s[i]);  
 }
 else if(s[i]==')'){
    st.pop();
 }
 ans=max(ans,(int)st.size());
}
 return ans;    
    }
};