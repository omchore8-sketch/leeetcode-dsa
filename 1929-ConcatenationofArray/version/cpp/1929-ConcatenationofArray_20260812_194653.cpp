// Last updated: 8/12/2026, 7:46:53 PM
// easy dude........
1class Solution {
2public:
3    vector<int> getConcatenation(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> ans;
6
7        for(int i = 0; i < n; i++) {
8            ans.push_back(nums[i]);
9        }
10
11        for(int i = 0; i < n; i++) {
12            ans.push_back(nums[i]);
13        }
14
15        return ans;
16    }
17};