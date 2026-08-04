// Last updated: 8/4/2026, 7:29:01 PM
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;

        for (int i = 0; i < nums.size() - 1; i++) {
            for (int val = nums[i] + 1; val < nums[i + 1]; val++) {
                ans.push_back(val);
            }
        }

        return ans;
    }
};