// Last updated: 8/8/2026, 10:21:31 AM
/*
 * sort(strs.begin(), strs.end(), [](const string& a, const string& b) {
 *             return a + b > b + a;
 *         });
 * 
 *         
 *         if (strs[0] == "0") return "0";
 * 
 *         string result = "";
 *         for (const string& s : strs) {
 *             result += s;
 *         }
*/

1class Solution {
2public:
3    string largestNumber(vector<int>& nums) {
4        vector<string> strs;
5        for (int num : nums) {
6            strs.push_back(to_string(num));
7        }
8
9       
10        sort(strs.begin(), strs.end(), [](const string& a, const string& b) {
11            return a + b > b + a;
12        });
13
14        
15        if (strs[0] == "0") return "0";
16
17        string result = "";
18        for (const string& s : strs) {
19            result += s;
20        }
21
22        return result;
23    }
24};