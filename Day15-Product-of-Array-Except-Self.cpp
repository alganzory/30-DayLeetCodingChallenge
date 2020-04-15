class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        auto sz =nums.size();
        int left=1, right=1;
        vector<int> ret(sz,1);
        
        for(int i=0;i<sz;i++){
            ret[i]*=left;
            ret[sz-1-i]*=right;
            left*=nums[i];
            right*=nums[sz-1-i];
        }
        return ret;
    }
};
