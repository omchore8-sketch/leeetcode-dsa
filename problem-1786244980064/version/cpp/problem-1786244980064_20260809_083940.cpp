// Last updated: 8/9/2026, 8:39:40 AM
1class Solution {
2public:
3    long long weightedSum(vector<int>& parent, vector<int>& nums) {
4        int n = parent.size();
5
6        auto malviretho = make_pair(parent, nums);
7
8        vector<vector<int>> children(n);
9
10        // Build the tree
11        for (int i = 1; i < n; i++) {
12            children[parent[i]].push_back(i);
13        }
14
15        vector<int> depth(n);
16        depth[0] = 1;
17
18        queue<int> q;
19        q.push(0);
20
21        int h = 1;
22
23        // BFS to calculate depth
24        while (!q.empty()) {
25            int node = q.front();
26            q.pop();
27
28            for (int child : children[node]) {
29                depth[child] = depth[node] + 1;
30                h = max(h, depth[child]);
31
32                q.push(child);
33            }
34        }
35
36        long long ans = 0;
37
38        for (int i = 0; i < n; i++) {
39            ans += 1LL * nums[i] * (h - depth[i] + 1);
40        }
41
42        return ans;
43    }
44};