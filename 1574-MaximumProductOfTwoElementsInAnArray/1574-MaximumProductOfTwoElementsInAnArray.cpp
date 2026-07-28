// Last updated: 7/28/2026, 6:26:43 PM
class Solution {
public:
    int maxProduct(vector<int>& nums) {
    int n=nums.size();
    int largest=0;
    int secondLargest=0;
     for (int i=0;i<n;i++) {
            if (nums[i] > largest) {
                secondLargest = largest;
                largest = nums[i];
            } 
            else if (nums[i] > secondLargest) {
                secondLargest = nums[i];
            }
        }
        return((largest-1)*(secondLargest-1));
    }    
    
};