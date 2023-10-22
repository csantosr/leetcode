class Solution {
public:
    int maxProfit(vector<int>& prices) {
        size_t lowestIdx = 0, highestIdx = 0;
        for (size_t i = 0; i < prices.size(); i++) {
            if (prices[lowestIdx] > prices[i]) {
                lowestIdx = i;
            }
            if (prices[highestIdx] < prices[i]) {
                highestIdx = i;
            }
        }
        size_t highestLowIdx = lowestIdx;
        for (size_t i = lowestIdx; i < prices.size(); i++) {
            if (prices[i] > prices[highestLowIdx]) {
                highestLowIdx
            }
        }
    }
};
