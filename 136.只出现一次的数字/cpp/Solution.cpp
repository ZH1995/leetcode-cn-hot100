class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = nums[0];
        int size = nums.size();
        for (int i = 1; i < size; i ++) {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};