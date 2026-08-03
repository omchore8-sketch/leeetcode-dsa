// Last updated: 8/4/2026, 12:23:11 AM
class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans="";
    
    int o=0;
    
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='(')
        {
            o++;
            if(o>1) ans+='(';
        }
        
        else{
            if(o>1) ans+=')';
            o--;
        }
    }
    
    return ans;
}    
    
};