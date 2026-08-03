// Last updated: 8/4/2026, 12:22:58 AM
class Solution {
public:
    int countRatioSubarrays(vector<int>& nums, int a, int b) {
    int n=nums.size();
    int validcount=0;
     for(int i=0;i<n;i++){
      int evencount=0;
      int oddcount=0;
       for(int j=i;j<n;j++){
       if(nums[j]%2==0){
           evencount++;
       } 
           else{
           oddcount++;    
           }
       if(oddcount>0 && evencount*b<=oddcount*a){
           validcount++;
       }  
     }   

   } 
     return validcount;   
  }
};