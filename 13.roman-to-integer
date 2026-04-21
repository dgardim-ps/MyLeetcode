#include <string>
#include <iostream>
#include <unordered_map>

using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> r = {{'M', 1000}, {'D', 500}, {'C', 100}, {'L', 50}, {'X', 10}, {'V', 5}, {'I', 1}};
        int soma = 0;
        for (int i = 0; i < s.length(); i++) {
            if (i + 1 < s.length() && r[s[i]] < r[s[i + 1]]) {
                soma -= r[s[i]];
            } else {
                soma += r[s[i]];
            }
        }
        return soma;
    }
};
