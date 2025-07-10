#include <bits/stdc++.h> 

bool calc(vector<int> &v, int idx, int k, vector <vector <int>> &memo) {
    if (k == 0) return true;
    if (idx < 0) return false;

    bool notTake;
    if (memo[idx][k] != -1) notTake = memo[idx][k];
    else notTake = calc(v, idx - 1, k, memo);
    bool take = false;
    if (v[idx] <= k) {
        if (memo[idx][k] != -1) take = memo[idx][k];
        else take = calc(v, idx - 1, k - v[idx], memo);
    }

    return memo[idx][k] = (take || notTake);
}

bool subsetSumToK(int n, int k, vector<int> &arr) {
    vector<vector<int>> memo(n + 1, vector<int>(k + 1, -1));
    return f(arr, n-1, k, memo);
}