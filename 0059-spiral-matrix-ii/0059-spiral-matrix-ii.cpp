class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int> > ans(n,vector<int>(n,0));
        int a = 1;
        int i=0,j=0;
        for(int k=0;k<n;k++){
            ans[i][j++] = a++;
        }
        j--;
        int m = n-1;
        bool flag = true;
        while(0 != m){
            if(flag){
                for(int k=0;k<m;k++){
                    ans[(i++)+1][j] = a++;
                }
                for(int k=0;k<m;k++){
                    ans[i][(j--)-1] = a++;
                }
            }
            else{
                for(int k=0;k<m;k++){
                    ans[(i--)-1][j] = a++;
                }
                for(int k=0;k<m;k++){
                    ans[i][(j++)+1] = a++;
                }
            }
            m--;
            flag = !flag;
        }
        return ans;
    }
};