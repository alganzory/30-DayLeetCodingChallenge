class Solution {
public:

    bool isSquare (int i, int j, vector<vector<char>>& matrix) {
       int sz  = matrix.size();
      int sz2 = matrix [0].size();
      if (i <0 or i >= sz or j <0 or j >= sz2) return false;

      if (i+1 >= sz or  j + 1 >= sz2 ) return false;

      if (matrix[i+1][j] == '1' and matrix [i][j+1] == '1' and matrix[i+1][j+1] == '1' ) return true;

      return false;

    }
    int dp (int i, int j, vector<vector<char>>& matrix, vector<vector<int>>& visited) {
      int sz  = matrix.size();
      int sz2 = matrix [0].size();
    
      if (!isSquare(i, j, matrix)) return 0;

      if (visited [i][j] != 0 ) return visited[i][j];
      int right = dp (i+1, j , matrix, visited);
      int down = dp (i, j+1 , matrix, visited);
      int dia = dp (i+1, j+1 , matrix, visited);

      return visited[i][j] = 1 + min (right, min (down,dia));
    }


    int maximalSquare(vector<vector<char>>& matrix) {
      if (matrix.empty()) return 0 ;
       int sz  = matrix.size();
      int sz2 = matrix [0].size();
      vector <vector<int> > visited ( sz+5, vector <int> (sz2+5) ) ;
      int dpAns = -1;
      for (int i = 0 ; i < sz; i++) {
          for (int j =0 ; j  <sz2; j++) {
            if (  matrix [i][j] == '1')
            dpAns = max (dpAns, dp (i, j, matrix, visited));
          }
      }
      return  (dpAns+1) * (dpAns+1) ;
    }
};
