class Solution {
public:
    int minInsertions(string s) {
        int sz = s.size();
        vector<vector<int>> dp(sz, vector<int>(sz, 0));
        for (int len = 2; len <= sz; len++){
            for (int l = 0; l + len - 1 < sz; l++){
                int r = l + len - 1;
                if (s[l] == s[r]){
                    dp[l][r] = dp[l + 1][r - 1];
                }
                else{
                    dp[l][r] = min(1 + dp[l + 1][r], 1 + dp[l][r - 1]);
                }
            }
        }
        return dp[0][sz - 1];
    }
};