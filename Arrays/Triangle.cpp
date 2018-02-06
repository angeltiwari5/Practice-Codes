class Solution {
public:
     int minimumTotal(vector<vector<int>>& triangle) {
        int n = triangle.size();
        vector<vector<int>> mem(n, vector<int>(n, INT_MAX));
        return solve(0, 0, n, triangle, mem);
    }
    int solve(int i, int j ,int n,vector<vector<int>>& t, vector<vector<int>>& m) {
        if (m[i][j] != INT_MAX) return m[i][j];
        return m[i][j] = t[i][j] + (i == n-1 ? 0 : min(solve(i+1, j, n, t, m), solve(i+1, j+1, n, t, m)));
    }
};