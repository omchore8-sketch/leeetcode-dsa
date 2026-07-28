// Last updated: 7/28/2026, 6:26:48 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
       int n= nums.size();
       int count =0;
       int candidate=0;
       for(int i=0;i<n;i++){
        if(count==0){
            count=1;
        candidate=nums[i];    
        }
        else if(nums[i]==candidate){
            count++;
        }
        else if(nums[i]!=candidate){
            count--;
        }
       } 
       return candidate;
    }
};