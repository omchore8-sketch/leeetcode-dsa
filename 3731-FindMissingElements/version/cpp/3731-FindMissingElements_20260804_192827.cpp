// Last updated: 8/4/2026, 7:28:27 PM
/*
 * class Solution {
 * public:
 *     vector<int> findMissingElements(vector<int>& nums) {
 *         sort(nums.begin(), nums.end());
 *         vector<int> ans;
 * 
 *         for (int i = 0; i < nums.size() - 1; i++) {
 *             // Fill all values between consecutive elements
 *             for (int val = nums[i] + 1; val < nums[i + 1]; val++) {
 *                 ans.push_back(val);
 *             }
 *         }
 * 
 *         return ans;
 *     }
 * };
*/

1class Solution {
2public:
3    vector<int> findMissingElements(vector<int>& nums) {
4        sort(nums.begin(), nums.end());
5        vector<int> ans;
6
7        for (int i = 0; i < nums.size() - 1; i++) {
8            for (int val = nums[i] + 1; val < nums[i + 1]; val++) {
9                ans.push_back(val);
10            }
11        }
12
13        return ans;
14    }
15};