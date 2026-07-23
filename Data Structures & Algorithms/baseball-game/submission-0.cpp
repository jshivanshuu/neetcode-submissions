class Solution {
public:
    int calPoints(vector<string>& operations) {
        int n = operations.size();
        vector<int> st;
        for(auto it : operations){
            if(it == "+"){
                int top = st.back();
                st.pop_back();
                int newtop = top + st.back();
                st.push_back(top);
                st.push_back(newtop);
            }
            else if(it == "D"){
                st.push_back(2*st.back());
            }
            else if(it == "C"){
                st.pop_back();
            }
            else{
                st.push_back(stoi(it));
            }
        }
        return accumulate(st.begin(),st.end(),0);
    }
};