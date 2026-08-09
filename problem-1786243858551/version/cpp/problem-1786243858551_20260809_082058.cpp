// Last updated: 8/9/2026, 8:20:58 AM
/*
 * class Solution {
 * public:
 *     double minimumSum(vector<int>& prices, vector<int>& discounts) {
 *         sort(prices.rbegin(), prices.rend());
 *         sort(discounts.rbegin(), discounts.rend());
 * 
 *         double ans = 0;
 * 
 *         int m = min(prices.size(), discounts.size());
 * 
 *         for (int i = 0; i < m; i++) {
 *             ans += (double)prices[i] * (100 - discounts[i]) / 100.0;
 *         }
 * 
 *         for (int i = m; i < prices.size(); i++) {
 *             ans += prices[i];
 *         }
 * 
 *         return ans;
 *     }
 * };
*/

1class Solution {
2public:
3    double minPrice(vector<int>& prices, vector<int>& discounts) {
4        sort(prices.rbegin(), prices.rend());
5        sort(discounts.rbegin(), discounts.rend());
6
7        double ans = 0;
8
9        int m = min(prices.size(), discounts.size());
10
11        for (int i = 0; i < m; i++) {
12            ans += (double)prices[i] * (100 - discounts[i]) / 100.0;
13        }
14
15        for (int i = m; i < prices.size(); i++) {
16            ans += prices[i];
17        }
18
19        return ans;
20    }
21};