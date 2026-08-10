// Last updated: 8/10/2026, 10:05:57 PM
1class Solution {
2public:
3    int maxArea(vector<int>& height) {
4        int low = 0;
5        int high = height.size() - 1;
6        int maxarea = 0;
7
8        while (low < high) {
9            int currentheight = min(height[low], height[high]);
10            int currentwidth = high - low;
11            maxarea = max(maxarea, currentheight * currentwidth);
12
13            if (height[low] < height[high]) {
14                low++;
15            } else {
16                high--;
17            }
18        }
19
20        return maxarea;
21    }
22};