// https://leetcode.com/problems/greatest-common-divisor-of-strings/
#include <bits/stdc++.h>

class Solution {
public:
    int hcf (int n1, int n2){
        return __gcd(n1, n2);
    }
    string gcdOfStrings(string str1, string str2) {
        if(str1[0] != str2[0]) return "";
        string res = "";
        int n1 = str1.length();
        int n2 = str2.length();
        string s3 = str1.substr(0, hcf(n1, n2));
        int n3 = s3.length();
        for(int i=0; i<n1; i+=n3){
            if(!(str1.substr(i, n3) == s3)) return "";
        }
        for(int i=0; i<n2; i+=n3){
            if(!(str2.substr(i, n3) == s3)) return "";
        }
        return s3;
    }
};
