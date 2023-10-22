class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> nums(n+m, 0);
        size_t nums1Point = 0, nums2Point = 0;
        for(int i = 0; i < n+m; i++) {
            if (nums2Point >= n || (nums1Point < m && nums1[nums1Point] < nums2[nums2Point])) {
                nums[i] = nums1[nums1Point++];
            } else {
                nums[i] = nums2[nums2Point++];
            }
        }
        for (int i = 0; i < n+m; i++) {
            nums1[i] = nums[i];
        }
    }
};
