// Last updated: 8/13/2026, 7:49:48 PM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;

        for(int i = 0; i < n; i++) {
            ans.push_back(nums[i]);
        }

        for(int i = 0; i < n; i++) {
            ans.push_back(nums[i]);
        }

        return ans;
    }
};