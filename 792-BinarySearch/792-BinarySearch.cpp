// Last updated: 7/30/2026, 6:29:21 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
    int left=0;
    int right=nums.size()-1;
    while(left<=right){
    int mid=left+(right-left)/2; 
    if(nums[mid]==target){
        return mid;
    } 
    else if(target<nums[mid]){
        right=mid-1;
    }
    else if(target>nums[mid]){
    left=mid+1;
    }
  }
      return -1;
} 
    
};