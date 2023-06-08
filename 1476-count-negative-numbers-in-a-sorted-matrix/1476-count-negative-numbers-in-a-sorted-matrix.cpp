class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int ans = 0;
        for(int i=grid.size()-1;i>=0;i--){
            for(int j=0;j<grid[0].size();j++){
                if(0 > grid[i][j]){
                    ans+=(grid[0].size() - j);
                    break;
                }
            }
        }
        return ans;
    }
};