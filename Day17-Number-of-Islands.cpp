class Solution {
public:
    // To check for not going out of the grid
    
    int dx[4]= {0,0,1,-1};
    int dy[4]= {1,-1,0,0};
    
    // To navigate the grid easier
    
    
    void dfs (int i, int j, vector<vector<char>>& grid, vector<vector<int>>& visited ) {
        int n = grid.size();
        int nr = grid[0].size();
        cout << n << " " << nr << endl; 
        if (visited[i] [j]) return;
        visited[i][j] = 1; //mark it visited

        for (int k=0; k<4; k++) {
            int xc = dx[k] + i;
            int yc = dy[k] + j;

            if (xc>=0 && yc>=0 
                &&xc<n && yc <nr
                && !visited[xc][yc] 
                && grid[xc][yc] == '1') 

              dfs(xc,yc,grid,visited);
         }
    }
    
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        if (n==0 ) return 0;
        int nr = grid[0].size();
         vector <vector <int> > visited (
            (n),
            vector <int> (nr,0)
        );
        int cnt = 0;

        for (int i=0; i<n; i++) {
          for (int j=0; j<nr; j++){
            if (!visited[i][j] and grid[i][j] == '1')
            {
              dfs(i,j,grid,visited);
              cnt++;
             }
          }
        }  
        return cnt;  
    }
};
