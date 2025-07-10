class Solution {
public:
    void recurse(int i, int j, vector<vector<int>>& grid, vector<vector<int>>& days) {
        int m = grid.size();
        int n = grid[0].size();

        if (i - 1 >= 0 && grid[i - 1][j] == 1) {
            if (days[i - 1][j] == 0) {
                days[i - 1][j] = days[i][j] + 1;
                recurse(i - 1, j, grid, days);
            }
            else if (days[i - 1][j] > days[i][j] + 1) {
                days[i - 1][j] = days[i][j] + 1;
                recurse(i - 1, j, grid, days);
            }
        }

        if (j - 1 >= 0 && grid[i][j - 1] == 1) {
            if (days[i][j - 1] == 0) {
                days[i][j - 1] = days[i][j] + 1;
                recurse(i, j - 1, grid, days);
            }
            else if (days[i][j - 1] > days[i][j] + 1) {
                days[i][j - 1] = days[i][j] + 1;
                recurse(i, j - 1, grid, days);
            }
        }

        if (i + 1 < m && grid[i + 1][j] == 1) {
            if (days[i + 1][j] == 0) {
                days[i + 1][j] = days[i][j] + 1;
                recurse(i + 1, j, grid, days);
            }
            else if (days[i + 1][j] > days[i][j] + 1) {
                days[i + 1][j] = days[i][j] + 1;
                recurse(i + 1, j, grid, days);
            }
        }

        if (j + 1 < n && grid[i][j + 1] == 1) {
            if (days[i][j + 1] == 0) {
                days[i][j + 1] = days[i][j] + 1;
                recurse(i, j + 1, grid, days);
            }
            else if (days[i][j + 1] > days[i][j] + 1) {
                days[i][j + 1] = days[i][j] + 1;
                recurse(i, j + 1, grid, days);
            }
        }
    }

    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<vector<int>> days(m, vector<int>(n, 0));

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 2) {
                    recurse(i, j, grid, days);
                }
            }
        }

        int ans = 0;

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 1 && days[i][j] == 0) return -1;
                ans = max(ans, days[i][j]);
            }
        }

        return ans;
    }
};