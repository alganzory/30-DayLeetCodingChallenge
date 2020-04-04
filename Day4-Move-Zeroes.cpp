class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int c=nums.size();
        nums.erase (remove(nums.begin(), nums.end(), 0), nums.end());
        c -= nums.size();

        while (c--) nums.push_back(0);

        for (auto x: nums) cout << x;
    }
};
