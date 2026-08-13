class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m = nums1.size();
        int n = nums2.size();

        int i = 0;
        int j = 0;

        vector<int> res(m + n);
        int size = 0;

        while (i < m && j < n) {
            if (nums1[i] < nums2[j]) {
                res[size++] = nums1[i];
                i++;
            }
            else {
                res[size++] = nums2[j];
                j++;
            }
        }

        // Copy remaining elements
        while (i < m) {
            res[size++] = nums1[i];
            i++;
        }

        while (j < n) {
            res[size++] = nums2[j];
            j++;
        }

        int x = res.size();

        if (x % 2 == 0) {
            return ((double)res[x / 2 - 1] + res[x / 2]) / 2.0;
        }
        else {
            return res[x / 2];
        }
    }
};
