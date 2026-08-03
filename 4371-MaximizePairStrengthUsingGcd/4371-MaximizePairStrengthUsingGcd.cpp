// Last updated: 8/4/2026, 12:22:56 AM
class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long max_strength = 0;
        int n = nums.size();
        
        for (int i = 0; i < n-1; ++i) {
            for (int j = i + 1; j < n; ++j) {
                long long g = gcd(nums[i], nums[j]);
                long long strength = ((long long)nums[i] * nums[j]) / (g * g);
                max_strength = max(max_strength, strength);
            }
        }
        
        return max_strength;
    }
};