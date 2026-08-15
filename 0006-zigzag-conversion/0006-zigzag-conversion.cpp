class Solution {
public:
    string convert(string s, int numRows) {
        if (numRows == 1)
            return s;

        vector<string> rows(numRows);
        int currentRow = 0;
        bool goingDown = true;

        for (char c : s) {
            rows[currentRow] += c;

            if (currentRow == 0) {
                goingDown = true;
            } else if (currentRow == numRows - 1) {
                goingDown = false;
            }

            if (goingDown) {
                currentRow++;
            } else {
                currentRow--;
            }
        }

        string result = "";
        for (string row : rows) {
            result += row;
        }
        return result;
    }
};