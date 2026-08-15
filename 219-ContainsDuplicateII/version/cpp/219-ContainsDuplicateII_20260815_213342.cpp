// Last updated: 8/15/2026, 9:33:42 PM
1#include <vector>
2#include <unordered_set>
3
4class Solution {
5public:
6    bool containsNearbyDuplicate(std::vector<int>& nums, int k) {
7        unordered_set<int> set;
8        
9        for (int i = 0; i < nums.size(); ++i) {
10            
11            if (i > k) {
12                set.erase(nums[i - k - 1]);
13            }
14            
15            
16            if (set.count(nums[i])) {
17                return true;
18            }
19            
20            
21            set.insert(nums[i]);
22        }
23        
24        return false;
25    }
26};