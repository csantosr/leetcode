class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int newK = k % nums.size();
        reverse(nums.begin(), nums.end() - newK);
        reverse(nums.begin() + (nums.size() - newK), nums.end());
        reverse(nums.begin(), nums.end());
    }
};
