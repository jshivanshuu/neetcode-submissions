class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        if(strs.size() == 1) return {{strs[0]}};
        vector<vector<string>> res;
        unordered_set<int> st;
        int n = strs.size();
        for(int i = 0;i<strs.size();i++){
            vector<string> ans;
            unordered_map<char,int> mp1;
            for(auto it : strs[i]){
                mp1[it]++;
            }
            for(int j = i;j<n;j++){
                unordered_map<char,int> mp2;
                for(auto it2 : strs[j]){
                    mp2[it2]++;
                }
                if(mp1 == mp2){
                    if(st.find(j)==st.end()){
                        ans.push_back(strs[j]);
                        st.insert(j);
                    }
                }
            }
            if(!ans.empty()){
            res.push_back(ans);
            }
        }
        return res;
    }
};
