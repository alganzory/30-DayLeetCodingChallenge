
class Solution {
public:
    int dp (int idx1, int idx2, const string& text1, const string& text2, vector <vector<int> >& mem) {
      int sz = text1.size(), sz2= text2.size();
      if (idx1 == 0 or idx2 == 0) return 0; 

      if (mem[idx1][idx2] != 0 ) return mem[idx1][idx2];

      if (text1[idx1-1] == text2 [idx2-1]) 
        return mem[idx1][idx2] = 1 + dp (idx1-1, idx2-1, text1, text2, mem);
      else return mem[idx1][idx2] = max (dp (idx1-1, idx2, text1, text2, mem), dp (idx1, idx2-1, text1, text2, mem));
    }

    int longestCommonSubsequence(string text1, string text2) {
        vector <vector <int > >mem (
          1005, vector < int> (1005,0)
        );
         int sz = text1.size(), sz2= text2.size();

        return dp (sz,sz2,text1,text2,mem);
    }
};
