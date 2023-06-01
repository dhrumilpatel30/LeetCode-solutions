class Solution {
public:

    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int size =grid.size();

        if(grid[0][0]==1 || grid[size-1][size-1]){
            return -1;
        }

        queue<vector<int>> Q;
        Q.push({0,0,1});
        grid[0][0]=1;

        while(!Q.empty()){
            
            auto pt = Q.front();
            Q.pop();
            
            int row = pt[0], col = pt[1] , distance = pt[2];

            if(row==size-1 && col==size-1){
                return distance;
            }

            for(int i = -1 ; i<= 1 ; i++){
                int n_row = row + i ;
                for(int j= -1 ; j<=1 ; j++){
                    int n_col = col + j;
                    if(n_row >= 0 && n_row < size && n_col >= 0 && n_col < size && grid[n_row][n_col]==0){
                        grid[n_row][n_col]=1;
                        Q.push({ n_row , n_col , distance+1 });
                    }
                    
                }
            }
        }
        return -1;
    }
};