// Last updated: 8/25/2026, 12:47:34 AM
1class Solution {
2    public int beautySum(String s) {
3        int ans=0;
4        for(int i=0;i<s.length();i++){
5            int [] freq=new int [26];
6            for(int j=i;j<s.length();j++){
7                char ch=s.charAt(j);
8                freq[ch-'a']++;
9                int max=Integer.MIN_VALUE;
10                int min=Integer.MAX_VALUE;
11                for(int k=0;k<26;k++){
12                    if(freq[k]>0){
13                        min=Math.min(min,freq[k]);
14                        max=Math.max(max,freq[k]);
15                    }
16                }
17                ans+=max-min;
18            }
19        }
20        return ans;
21    }
22}