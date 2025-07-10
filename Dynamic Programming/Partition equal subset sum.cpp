class Solution {
public:
    bool f(vector<int> &v, int idx, int k, vector <vector <int>> &memo) {
        if (k == 0) return true;
        if (idx < 0) return false;

        bool notTake;
        if (memo[idx][k] != -1) notTake = memo[idx][k];
        else notTake = f(v, idx - 1, k, memo);
        bool take = false;
        if (v[idx] <= k) {
            if (memo[idx][k] != -1) take = memo[idx][k];
            else take = f(v, idx - 1, k - v[idx], memo);
        }

        return memo[idx][k] = (take || notTake);
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for (int val : nums) sum+=val;
        if (sum%2==1) return 0;
        int k = sum/2;
        vector<vector<int>> memo(n + 1, vector<int>(k + 1, -1));
        return f(nums, n-1, k, memo);
    }
};