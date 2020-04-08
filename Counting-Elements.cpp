#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int countElements(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int cnt =0;
        int i =0;
        while (i < arr.size() ) {
          auto it = upper_bound(arr.begin(), arr.end(), arr[i]);

          if (it == arr.end()) break;
    
          if (*it == arr[i] + 1 ) {
          cnt += (it) - (arr.begin()+i);
        
          }
         i = it - arr.begin();
        }
      return cnt;
    }
};
