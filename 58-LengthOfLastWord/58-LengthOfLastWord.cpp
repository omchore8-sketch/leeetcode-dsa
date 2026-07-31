// Last updated: 7/31/2026, 7:05:16 PM
class Solution {
public:
    int lengthOfLastWord(string s) {
        int count = 0;
        int n = s.size();
        int j = n - 1;
        while (j >= 0 && s[j] == ' ') {
            j--;
        }
        while (j >= 0 && s[j] != ' ') {
            count++;
            j--;
        }

        return count;
    }
};