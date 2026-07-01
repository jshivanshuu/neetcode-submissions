class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
   sort(nums.begin(),nums.end());
   int i = 0;
   vector<int> res;
   int n = nums.size();
   unordered_set<int> st;
   int j = n-1;
  while(i<n){
    int j = i+1;
    while(j<n && nums[i] == nums[j]){
        j++;
    }
    if(j-i > n/3){
        res.push_back(nums[i]);
    }
    i=j;
  }
  return res;
    }
};