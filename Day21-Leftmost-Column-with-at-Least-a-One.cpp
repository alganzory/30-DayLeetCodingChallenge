/**
 * // This is the BinaryMatrix's API interface.
 * // You should not implement it, or speculate about its implementation
 * class BinaryMatrix {
 *   public:
 *     int get(int x, int y);
 *     vector<int> dimensions();
 * };
 */

class Solution {
public:
    
   
  int leftMostColumnWithOne(BinaryMatrix &binaryMatrix) {
      auto dim = binaryMatrix.dimensions();
      int n = dim[0],  m= dim[1];
       set <int> lowest;
  
     cout << n << " " << m << endl;
      for (int i=0; i<n; i ++) {
        auto l = 0 , r = m-1;
        int ans= -1;
         while (r>=l) {
             
          cout << "L: " << l << "R: " << r << endl;
    
          int mid = l +(r-l) /2;
             
        cout << "mid: " << mid << endl;
          if (binaryMatrix.get(i, mid) > 0 ){
            ans = mid;
            r=mid-1;
          }
          else l = mid +1;
        }
        cout << "ans: " <<  ans << endl << flush ;
        lowest.insert(ans);
      }
     auto it = lowest.upper_bound(-1);
      if (it == lowest.end()) return -1;

      return *it;
  }

};
