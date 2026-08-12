class Solution {
public:
    void ans(int r, int c, vector<vector<char>>& grid){
        int n = grid.size();
        int m = grid[0].size();
        if(r<0 || r>=n || c<0 || c>=m || grid[r][c] == '0'){
            return;
        }
        grid[r][c] = '0';
        ans(r+1,c,grid);
        ans(r-1,c,grid);
        ans(r,c+1,grid);
        ans(r,c-1,grid);
    }
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int cnt = 0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j] == '1'){
                    cnt++;
                    ans(i,j,grid);
                }
            }
        }
        return cnt;
    }
};