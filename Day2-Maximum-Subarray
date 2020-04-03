class Solution {
    //Kadane's algorithm
public:
    int maxSubArray(vector<int>& nums) {
        int mx = INT_MIN, mh = 0; 
  
    for (auto x: nums) 
    { 
        mh = mh + x; 
        if (mx < mh) 
            mx = mh; 
  
        if (mh < 0) 
            mh = 0; 
    } 
    return mx; 
    }
    
};
