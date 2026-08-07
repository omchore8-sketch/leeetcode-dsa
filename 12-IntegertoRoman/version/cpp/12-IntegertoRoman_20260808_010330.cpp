// Last updated: 8/8/2026, 1:03:30 AM
1class Solution {
2public:
3    string intToRoman(int num) {
4        const vector<pair<int, string>> valueSymbols{
5            {1000, "M"}, {900, "CM"}, {500, "D"}, {400, "CD"}, {100, "C"},
6            {90, "XC"},  {50, "L"},   {40, "XL"}, {10, "X"},   {9, "IX"},
7            {5, "V"},    {4, "IV"},   {1, "I"}};
8
9        string res;
10
11        for (const auto& [value, symbol] : valueSymbols) {
12            if (num == 0)
13                break;
14
15            while (num >= value) {
16                res += symbol;
17                num -= value;
18            }
19        }
20
21        return res;        
22    }
23};