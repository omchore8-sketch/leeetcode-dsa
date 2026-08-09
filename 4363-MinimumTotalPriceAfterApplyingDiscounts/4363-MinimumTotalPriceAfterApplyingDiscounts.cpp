// Last updated: 8/9/2026, 11:31:46 PM
class Solution {
public:
    double minPrice(vector<int>& prices, vector<int>& discounts) {
        sort(prices.rbegin(), prices.rend());
        sort(discounts.rbegin(), discounts.rend());

        double ans = 0;

        int m = min(prices.size(), discounts.size());

        for (int i = 0; i < m; i++) {
            ans += (double)prices[i] * (100 - discounts[i]) / 100.0;
        }

        for (int i = m; i < prices.size(); i++) {
            ans += prices[i];
        }

        return ans;
    }
};