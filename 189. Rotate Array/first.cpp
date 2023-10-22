class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> rotated(nums.size());
        for (size_t i = 0; i < nums.size(); i++) {
            rotated[(i+k) % nums.size()] = nums[i];
        }
        for (size_t i = 0; i < nums.size(); i++) {
            nums[i] = rotated[i];
        }
    }
};
