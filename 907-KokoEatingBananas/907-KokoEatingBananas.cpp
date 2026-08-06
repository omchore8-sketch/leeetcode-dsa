// Last updated: 8/6/2026, 7:37:49 PM
class Solution {
public:
    int findmax(vector<int>& piles) {
    int n=piles.size();    
     int maxi=INT_MIN;
     for(int i=0;i<n;i++){
     maxi=max(maxi,piles[i]);   
     }
      return maxi;
    } 
    long long maximumhourrate(vector<int>& piles, int hourly) {
    long long totalH = 0;
        int n=piles.size();
        for(int i=0;i<n;i++){
        totalH += (piles[i] + hourly - 1) / hourly;    
        }
         return totalH;
    }
    int minEatingSpeed(vector<int>& piles,int h){
     int low=1; 
     int high=findmax(piles); 
     while(low<=high){
      int mid=(low)+(high-low)/2;
      long long totalH=maximumhourrate(piles,mid);
      if(totalH<=h){
        high=mid-1;
      }
      else{
        low=mid+1;
      }  
       
    }
    return low ;   
    }
};