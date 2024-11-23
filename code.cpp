class Solution {
public:

    int solve(vector<vector<int>>&triangle, int row, int col){
        if(row == triangle.size() - 1) return triangle[row][col];

        /* case-1: moving down */
        int down = triangle[row][col] + solve(triangle, row+1, col);

        /* case-2: moving adjacent down */
        int adjacent = triangle[row][col] + solve(triangle, row+1, col+1);

        return min(down, adjacent);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        int row = 0, col = 0;
        return solve(triangle, row, col);
    }
};
