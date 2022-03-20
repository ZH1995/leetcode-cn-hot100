class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        if (size == 1) {
            return nums[0];
        }
        int prevSum = nums[0];
        int ans = prevSum;
        for(int i = 1; i < size; i ++) {
            prevSum = max(prevSum + nums[i], nums[i]);
            if (prevSum > ans) {
                ans = prevSum;
            }
        }
        
        return ans;
    }
};