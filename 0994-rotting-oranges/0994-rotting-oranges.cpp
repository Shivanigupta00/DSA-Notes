class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int time = 0;
        int total = 0;
        int cnt = 0;
        queue<pair<int,int>>pq;

        for(int i = 0; i<m; i++){
            for(int j = 0; j<n; j++){
                if(grid[i][j] != 0){
                    total++;
                }
                if(grid[i][j] ==2){
                    pq.push({i,j});
                }
            }
        }
        int dx[4] = {-1,0,+1,0};
        int dy[4]= {0,+1,0,-1};

        while(!pq.empty()){
            int k = pq.size();

            cnt+=k;

            while(k--){
                int x = pq.front().first;
                int y = pq.front().second;
                pq.pop();

                for(int i = 0; i<4; i++){
                    int mx =x+dx[i];
                    int my = y+dy[i];

                    if(mx<0 || my<0 || mx>=m || my >= n || grid[mx][my] != 1){
                        continue;
                    }
                    grid[mx][my] =2;
                    pq.push({mx,my});
                }
            }
            
            if(!pq.empty()){
                time++;
            }
        }
        return total == cnt? time : -1;

    }
};