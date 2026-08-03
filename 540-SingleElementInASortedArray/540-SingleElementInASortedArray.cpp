// Last updated: 8/4/2026, 12:23:16 AM
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low = 0;
        int high = nums.size() - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (mid % 2 == 1)
                mid--;

            if (nums[mid] == nums[mid + 1])
                low = mid + 2;
            else
                high = mid;
        }

        return nums[low];
    }
};