// Last updated: 8/13/2026, 7:48:54 PM
1class Solution{
2public:
3    int finddays(vector<int>& weights, int cap) {
4        int days = 1; 
5        int load = 0;
6        
7        for (int i = 0; i < weights.size(); i++) {
8            if (load + weights[i] > cap) {
9                days++;          
10                load = weights[i]; 
11            } else {
12                load += weights[i];
13            }
14        }
15        return days;
16    }
17
18    int shipWithinDays(vector<int>& weights, int days) {
19        
20        int low = *max_element(weights.begin(), weights.end());
21        
22        int high = accumulate(weights.begin(), weights.end(), 0);
23
24        while (low <= high) {
25            int mid = low + (high - low) / 2;
26            int requiredDays = finddays(weights, mid);
27
28            if (requiredDays <= days) {
29                high = mid - 1;
30            }
31            else{ 
32                low = mid + 1;  
33            }
34        }
35
36        return low;
37    }
38};