// Last updated: 8/4/2026, 12:23:32 AM
class Solution {
public:
    int findMin(vector<int>& nums) {
    int low=0,high=nums.size()-1;
    while(low<high){
    int mid=low+(high-low)/2;
    if(nums[mid]>nums[high]){
     low=mid+1;   
    }
    else{
      high=mid;  
    }    
    } 
    return nums[low];   
    }
};