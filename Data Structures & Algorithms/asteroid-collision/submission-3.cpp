class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n = asteroids.size();
        vector<int> res;
        stack<int> st;
        for(int i = 0;i<n;i++){
            if(asteroids[i]>0){
                st.push(asteroids[i]);
            }
            else{
                while(!st.empty() && abs(asteroids[i])>(st.top()) && st.top()>0){
                    st.pop();
                }
                if(!st.empty()&& abs(asteroids[i]) == st.top()){
                    st.pop();
                    
                }
                 else if(st.empty() ||
                        st.top() < 0){
                    
                    // Storing the array in final state
                    st.push(asteroids[i]);
                }
            }
        }
        while(!st.empty()){
            res.push_back(st.top());
            st.pop();

        }
        reverse(res.begin(),res.end());
        return res;
    }
};