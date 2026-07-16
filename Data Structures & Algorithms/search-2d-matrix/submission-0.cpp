class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rows = matrix.size();
        int columns = matrix[0].size();

        for (int i = 0; i < rows; i++) {

            if (target <= matrix[i][columns - 1]) {

                int left = 0;
                int right = columns - 1;

                while (left <= right) {
                    int mid = left + (right - left) / 2;

                    if (matrix[i][mid] == target)
                        return true;
                    else if (matrix[i][mid] < target)
                        left = mid + 1;
                    else
                        right = mid - 1;
                }

                return false;   // target cannot be in any later row
            }
        }

        return false;
    }
};