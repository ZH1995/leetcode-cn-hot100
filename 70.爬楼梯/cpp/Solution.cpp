class Solution {
public:
    int f[46];
    int climbStairs(int n) {
        if (n == 1 || n == 0) {
            return 1;
        } else if (f[n]) {
            return f[n]; 
        }
        f[n] = climbStairs(n-1) + climbStairs(n-2);
        return f[n];
    }
};