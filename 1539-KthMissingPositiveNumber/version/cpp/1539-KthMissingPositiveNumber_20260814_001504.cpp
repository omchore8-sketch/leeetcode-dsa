// Last updated: 8/14/2026, 12:15:04 AM
// absolute two pointer apprach
1class Solution {
2public:
3    int findKthPositive(vector<int>& arr, int k) {
4        int n = arr.size();
5
6        vector<int> arrr(n + k);
7
8        for(int i = 0; i < n + k; i++) {
9            arrr[i] = i + 1;
10        }
11
12        vector<int> result;
13
14        int j = 0;
15
16        for(int i = 0; i < n + k; i++) {
17
18            if(j < n && arrr[i] == arr[j]) {
19                j++;
20            }
21            else {
22                result.push_back(arrr[i]);
23            }
24
25            if(result.size() == k) {
26                return result[k - 1];
27            }
28        }
29
30        return -1;
31    }
32};