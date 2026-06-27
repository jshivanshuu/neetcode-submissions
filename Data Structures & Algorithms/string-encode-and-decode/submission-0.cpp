class Solution {
public:

    string encode(vector<string>& strs) {
        int n = strs.size();
        string s = "";
        for(int i = 0;i<n;i++){
            for(int j = 0;j<strs[i].size();j++){
                s.push_back(strs[i][j]);
            }
            s.push_back('.');
        }
        return s;
    }

    vector<string> decode(string s) {
        vector<string> ans;
        string res = "";
        for(int i = 0;i<s.size();i++){
           if(s[i] == '.'){
            ans.push_back(res);
            res = "";
           }
           else{
            res+=s[i];
           }
        }
        return ans;
    }
};
