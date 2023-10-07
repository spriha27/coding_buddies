// https://leetcode.com/problems/merge-strings-alternately/
class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string str = "";
        int i, n1=word1.length(), n2=word2.length();
        int sz = n1>n2 ? n2:n1;
        for(i=0; i<sz; i++){
            str += word1[i];
            str += word2[i];
        }

        if (n1 == n2) return str;
        if(sz == n2){
            str += word1.substr(i, n1-i);
        }
        else{
            str += word2.substr(i, n2-i);
        }

        return str;
    }
};
