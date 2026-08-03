class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       vector<int> newvec;
       for(int i = 0;i<matrix.size();i++){
        for(int j = 0;j<matrix[i].size();j++){
            newvec.push_back(matrix[i][j]);
        }
       }
       int l = 0;
       int r = newvec.size()-1;
       while(l<=r){
        int mid = l+(r-l)/2;
        if(newvec[mid] == target){
            return true;
        }
        else if(newvec[mid]>target){
            r = mid-1;
        }
        else {
            l = mid+1;
        }
       }
       return false;
    }
};
