class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max=nums[0],end=nums.size()-1;
        for(int pos=0;pos<=max;pos++)
        {
            if(pos+nums[pos]>max) max=pos+nums[pos];
            if(max>=end) return true;
        }
        return false;          
    }
};
