// Last updated: 8/6/2026, 7:10:09 PM
// This solution utilizes a binary search approach. First, I identify the maximum element within the piles to establish the search range. I then calculate the total hours required for a given eating speed and adjust the search bounds accordingly to determine the minimum speed.
1class Solution {
2public:
3    int findmax(vector<int>& piles) {
4    int n=piles.size();    
5     int maxi=INT_MIN;
6     for(int i=0;i<n;i++){
7     maxi=max(maxi,piles[i]);   
8     }
9      return maxi;
10    } 
11    long long maximumhourrate(vector<int>& piles, int hourly) {
12    long long totalH = 0;
13        int n=piles.size();
14        for(int i=0;i<n;i++){
15        totalH += (piles[i] + hourly - 1) / hourly;    
16        }
17         return totalH;
18    }
19    int minEatingSpeed(vector<int>& piles,int h){
20     int low=1; 
21     int high=findmax(piles); 
22     while(low<=high){
23      int mid=(low)+(high-low)/2;
24      long long totalH=maximumhourrate(piles,mid);
25      if(totalH<=h){
26        high=mid-1;
27      }
28      else{
29        low=mid+1;
30      }  
31       
32    }
33    return low ;   
34    }
35};