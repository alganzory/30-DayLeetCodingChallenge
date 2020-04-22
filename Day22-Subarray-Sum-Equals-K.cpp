class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        vector <int> prefixSum (nums.size()+5); prefixSum[0] = 0;
        for (int i = 1; i <= nums.size(); i++)
            prefixSum[i] = prefixSum[i - 1] + nums[i - 1];
        for (int i = 0; i < nums.size(); i++) {
            for (int j = i + 1; j <= nums.size(); j++) {
                if (prefixSum[j] - prefixSum[i] == k)
                    cnt++;
            }
        }
        return cnt;
    }
};
