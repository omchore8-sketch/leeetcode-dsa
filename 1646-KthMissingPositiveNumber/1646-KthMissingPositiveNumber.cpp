// Last updated: 8/15/2026, 9:35:33 PM
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n = arr.size();

        vector<int> arrr(n + k);

        for(int i = 0; i < n + k; i++) {
            arrr[i] = i + 1;
        }

        vector<int> result;

        int j = 0;

        for(int i = 0; i < n + k; i++) {

            if(j < n && arrr[i] == arr[j]) {
                j++;
            }
            else {
                result.push_back(arrr[i]);
            }

            if(result.size() == k) {
                return result[k - 1];
            }
        }

        return -1;
    }
};