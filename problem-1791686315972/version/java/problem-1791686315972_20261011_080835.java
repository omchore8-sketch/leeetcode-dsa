// Last updated: 10/11/2026, 8:08:35 AM
1class Solution {
2    public boolean threeFibonacciSum(int n) {
3      int a,b,c;
4        a=0;b=1;c=1;
5        while(a+b+c<=n){
6         if(a+b+c==n){
7             return true;
8         }
9        a=b;
10        b=c;
11        c=a+b;    
12        }
13        return false;
14    }
15}