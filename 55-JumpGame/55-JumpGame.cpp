// Last updated: 7/25/2026, 11:05:15 AM
class Solution {
public:
    bool canJump(vector<int>& nums) {
    int goal = nums.size()-1;

    for(int i =nums.size()-2; i>=0; i--) {
      if(i+nums[i] >= goal){
        goal = i;
      }  
    } 
    return goal == 0;   
    }
};