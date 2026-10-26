class Solution {
public:
    int m ,n;
    long long dfs(vector<vector<int>>&grid, int i,int j){
        // base
        if(i<0 || i>=m || j<0 || j>=n) return 0;
        if(grid[i][j] == 0){
            return 0;
        }
        // store curr val
        long long sum = grid[i][j];
        grid[i][j] = 0;

        sum += dfs(grid, i+1, j); // down
        sum += dfs(grid, i-1, j); // up
        sum += dfs(grid, i, j-1); // left
        sum += dfs(grid, i, j+1); // right

        return sum;


    }
    int countIslands(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();

        int count = 0;
        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j] != 0){
                    if(dfs(grid,i,j) % k== 0){
                        count++;
                    }
                }
            }
        }
        return count;
    }
};