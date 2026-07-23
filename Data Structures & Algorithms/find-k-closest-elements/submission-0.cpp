class Solution {
public:
    vector<int> findClosestElements(vector<int>& arr, int k, int x) {
        int n = arr.size();
        vector<pair<int,int>> close(n);
        for(int i = 0;i<n;i++){
            close[i] = {abs(arr[i]-x),arr[i]};
        }
        vector<pair<int,int>> temp = close;
        sort(temp.begin(),temp.end());
        vector<int> ans;
        for(int i = 0;i<k;i++){
            ans.push_back(temp[i].second);
        }
        sort(ans.begin(),ans.end());
        return ans;
        
    }
};