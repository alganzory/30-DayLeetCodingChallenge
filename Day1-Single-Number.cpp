class Solution {
public:
    int x = 0;
    int singleNumber(vector<int>& nums) {
        for (auto a: nums)
            x = x ^ a;
        return x;
    }
};
