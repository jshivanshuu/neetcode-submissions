class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> res(n);
        for(int i = 0;i<n-1;i++){
            int count = 0;
            for(int j = i+1;j<n;j++){
                if(temperatures[j]>temperatures[i]){
                    count = j-i;
                    break;
                }
            }
            res[i] = count;
        }
        return res;
    }
};
