class Solution {
public:
    int dp[50];
    int climbStairs(int n) {
        if(dp[n]!=0) return dp[n];
        if(n==0 || n==1) return 1;
        
        return dp[n] = climbStairs(n-1) + climbStairs(n-2);
    }
};
