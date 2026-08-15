// Last updated: 8/15/2026, 9:36:39 PM
class Solution {
public:
    int maxArea(vector<int>& height) {
        int low = 0;
        int high = height.size() - 1;
        int maxarea = 0;

        while (low < high) {
            int currentheight = min(height[low], height[high]);
            int currentwidth = high - low;
            maxarea = max(maxarea, currentheight * currentwidth);

            if (height[low] < height[high]) {
                low++;
            } else {
                high--;
            }
        }

        return maxarea;
    }
};