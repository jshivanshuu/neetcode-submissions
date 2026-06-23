class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<char,int>st1;
      unordered_map<char,int> st2;
      for(auto it : s){
       st1[it]++;
      }
      for(auto it : t){
        st2[it]++;
      }
      return st1==st2;

    }
};
