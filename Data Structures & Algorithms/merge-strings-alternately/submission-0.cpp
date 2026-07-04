class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int m = word1.size();
        int n = word2.size();
        int i = 0;
        int j = 0;
        string res = "";
        while(i<m && j<n){
            res.push_back(word1[i]);
            i++;
            res.push_back(word2[j]);
            j++;
        }
        while(i<m){
            res.push_back(word1[i]);
            i++;
        }
        while(j<n){
            res.push_back(word2[j]);
            j++;
        }
        return res;
    }
};