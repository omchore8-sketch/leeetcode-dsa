// Last updated: 8/15/2026, 9:35:58 PM
class Solution {
public:
    bool isIsomorphic(string s, string t) {

        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;

        int i = 0;

        while(i < s.length()) {

            char a = s[i];
            char b = t[i];

            // a is already mapped
            if(mp1.find(a) != mp1.end()) {
                if(mp1[a] != b) {
                    return false;
                }
            }
            else {
                mp1[a] = b;
            }

            // b is already mapped
            if(mp2.find(b) != mp2.end()) {
                if(mp2[b] != a) {
                    return false;
                }
            }
            else {
                mp2[b] = a;
            }

            i++;
        }

        return true;
    }
};