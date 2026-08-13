// Last updated: 8/13/2026, 7:50:11 PM
class Solution {
public:
typedef pair<char,int> p;
    string frequencySort(string s) {
    vector<p> vec(123);
    for(char &ch : s){
        vec[ch].first = ch;
            vec[ch].second++;
    }
    auto lambda = [&] (p &k1, p &k2){
     return k1.second>k2.second;
    };
    sort(begin(vec),end(vec),lambda);
     string result="";
     for(int i=0;i<123;i++){
     if(vec[i].second>0){
      char ch=vec[i].first;
      int freq=vec[i].second;
      string temp=string(freq,ch); 
      result+=temp;
     }

     }
     return result; 
    }
};