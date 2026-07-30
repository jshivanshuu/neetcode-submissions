class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        stack<int> st;
        vector<int> res(n);
        for(int i = n-1;i>=0;i--){
            int count = 0;
            while(!st.empty() && temperatures[st.top()]<=temperatures[i]) {
                st.pop();
            }
            if(st.empty()){
                count = 0;
            }
            else{
            count = st.top()-i;
            }
            res[i] = count;
            st.push(i);
        }
        return res;
    }
};
