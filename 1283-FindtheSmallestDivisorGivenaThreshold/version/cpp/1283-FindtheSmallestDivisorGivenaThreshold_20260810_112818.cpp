// Last updated: 8/10/2026, 11:28:18 AM
1class Solution {
2public:
3    
4      int sumByD(vector<int>& nums, int div) {
5        int sum = 0;
6        for (int num : nums){
7            sum += ceil((double)num / div);
8        }
9        return sum;
10    }
11    int smallestDivisor(vector<int>& nums, int threshold) {
12        if (nums.size() > threshold) return -1;
13
14        int low = 1;
15        int high = *max_element(nums.begin(), nums.end());
16        while (low <= high) {
17            int mid = (low + high) / 2;
18            if (sumByD(nums, mid) <= threshold) {
19                high = mid - 1;
20            } else {
21                low = mid + 1;
22            }
23        }
24
25        return low;
26    }
27};   