class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int>prefixproduct(n);
        vector<int>suffixproduct(n);
        prefixproduct[0] = 1;
        for(int i  = 1;i<n;i++){
            prefixproduct[i] = nums[i-1]*prefixproduct[i-1];
        }
        suffixproduct[n-1] = 1;
        for(int j = n-2;j>=0;j--){
            suffixproduct[j] = suffixproduct[j+1]*nums[j+1];
        }
        vector<int> res;
        for(int i = 0;i<n;i++){
            res.push_back(prefixproduct[i]*suffixproduct[i]);
        }
        return res;

    }
};
