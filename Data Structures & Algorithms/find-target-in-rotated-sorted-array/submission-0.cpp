class Solution {
public:
    int binarysearch(vector<int>& nums,int target, int left, int right){
        while(left<=right){
            int mid = left+(right-left)/2;
            if(nums[mid] == target){
                return mid;
            }
            else if(nums[mid]<target){
                left = mid+1;
            }
            else{
                right = mid-1;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        while(left<right){
            int mid = left+(right-left)/2;
            if(nums[mid]>nums[right]){
                left = mid+1;
            }
            else{
                right = mid;
            }
        }
        int pivot = left;
        int result = binarysearch(nums,target,0,pivot-1);
        if(result!=-1){
            return result;
        }
        return binarysearch(nums,target,pivot,nums.size()-1);
    }
};
