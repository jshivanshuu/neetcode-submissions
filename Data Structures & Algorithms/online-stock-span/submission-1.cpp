class StockSpanner {
public:
    stack<int> st;
    stack<int> st2;
    vector<int> res;
    StockSpanner() {
    }
    int next(int price) {
        int count = 1;
        while(!st.empty() && st.top()<=price){
            count++;
            int ele = st.top();
            st2.push(ele);
            st.pop();
        }

        while(!st2.empty()){
            st.push(st2.top());
            st2.pop();
        }
        st.push(price);
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */