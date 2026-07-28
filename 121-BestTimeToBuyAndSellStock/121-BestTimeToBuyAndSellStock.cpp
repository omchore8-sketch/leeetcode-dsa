// Last updated: 7/28/2026, 6:26:52 PM
class Solution {
public:
    int maxProfit(vector<int>& prices) {
    int n=prices.size();
    int maxProfit = 0;
    int minProfit =prices[0];
    for(int i=0;i<n;i++){
    int cost=prices[i]-minProfit;
    maxProfit=max(maxProfit,cost);
    minProfit=min(minProfit,prices[i]);
    } 
    return maxProfit;   
    }
};