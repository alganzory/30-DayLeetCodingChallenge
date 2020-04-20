
class Solution {
public:

    int sol (int i, int j,vector<vector<int>>& grid, vector<vector<int>>& mem ){
      int n = grid.size();
      int nr = grid[0].size();

      if (i==n-1 and j==nr-1) return grid[i][j];

      auto x = grid[i][j];
      int ret = INT_MAX;

      if (mem[i][j]!=0 )return mem[i][j];

      cout << i << j << endl;

      if (i+1 < n)
      ret = min (ret, x + sol (i+1,j,grid,mem) );
      if (j+1 < nr)
      ret = min (ret, x + sol (i,j+1,grid,mem) );

      return mem[i][j] = ret;
    }
    int minPathSum(vector<vector<int>>& grid) {
       int n = grid.size();
      int nr = grid[0].size();
      vector<vector <int > > mem ( n , vector <int> (nr,0));
      return sol (0,0,grid,mem);
    }
};
