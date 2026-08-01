// Last updated: 8/1/2026, 11:55:49 AM
class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        
        vector<int> result;
         int n=nums.size();
        for (int i=0;i<n;i++) {

            string s = to_string(nums[i]);
            int k=s.length();

            for (char i=0;i<k;i++) {

                result.push_back(s[i]-'0');
            }
        }

        return result;
    }
};