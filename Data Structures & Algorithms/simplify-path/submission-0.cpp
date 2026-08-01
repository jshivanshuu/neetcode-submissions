class Solution {
public:
    string simplifyPath(string path) {
        int n = path.size();
        stack<string> st;
        string temp = "";

        for (int i = 1; i <= n; i++) {

            // Process when we reach '/' or end of string
            if (i == n || path[i] == '/') {

                if (temp == "" || temp == ".") {
                    // Ignore empty component and current directory
                }
                else if (temp == "..") {
                    // Go to parent directory if possible
                    if (!st.empty())
                        st.pop();
                }
                else {
                    // Normal directory name
                    st.push(temp);
                }

                temp.clear();
            }
            else {
                temp.push_back(path[i]);
            }
        }

        if (st.empty())
            return "/";

        stack<string> st2;
        while (!st.empty()) {
            st2.push(st.top());
            st.pop();
        }

        string ans = "";

        while (!st2.empty()) {
            ans += "/";
            ans += st2.top();
            st2.pop();
        }

        return ans;
    }
};