// Last updated: 7/5/2026, 6:07:44 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& v) {
        if (v.empty()) return "";

        sort(v.begin(), v.end());

        string first = v.front();
        string last = v.back();

        string ans = "";

        for (int i = 0; i < min(first.size(), last.size()); i++) {
            if (first[i] != last[i])
                break;
            ans += first[i];
        }

        return ans;
    }
};