// Last updated: 7/28/2026, 6:26:41 PM
class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n,0);
    int postIndex=0,negIndex=1;
    for(int i=0;i<n;i++){
       if(nums[i]>0){
        ans[postIndex]=nums[i];
        postIndex += 2;
       } 
       else{
       ans[negIndex]=nums[i];
        negIndex +=2;
    }  
    } 
    return ans; 
    }
};