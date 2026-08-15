class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int>(n));
        int top = 0, bottom = n - 1, left = 0, right = n - 1;
        int num = 1;
        while(num <= n*n)
        {
            for(int col = left ; col <= right ; col++ )
            result[top][col] = num++;
            top++;
            for(int row = top ; row <= bottom ; row++)
            result[row][right] = num++;
            right--;
            for(int col = right ; col >= left ; col--)
            result[bottom][col] = num++;
            bottom--;
            for(int row = bottom ; row >= top ;  row--)
            result[row][left] = num++;
            left++;
        }
        return result;
    }
};