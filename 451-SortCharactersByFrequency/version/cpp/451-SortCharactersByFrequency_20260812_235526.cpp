// Last updated: 8/12/2026, 11:55:26 PM
1class Solution {
2public:
3typedef pair<char,int> p;
4    string frequencySort(string s) {
5    vector<p> vec(123);
6    for(char &ch : s){
7        vec[ch].first = ch;
8            vec[ch].second++;
9    }
10    auto lambda = [&] (p &k1, p &k2){
11     return k1.second>k2.second;
12    };
13    sort(begin(vec),end(vec),lambda);
14     string result="";
15     for(int i=0;i<123;i++){
16     if(vec[i].second>0){
17      char ch=vec[i].first;
18      int freq=vec[i].second;
19      string temp=string(freq,ch); 
20      result+=temp;
21     }
22
23     }
24     return result; 
25    }
26};