class Solution {
public:
    vector<int> spirallyTraverse(vector<vector<int>>& mat) {
        vector<int> answer;

        int rows = mat.size();
        int columns = mat[0].size();

        int srow = 0;
        int erow = rows - 1;
        int scol = 0;
        int ecol = columns - 1;

        while (srow <= erow && scol <= ecol) {

          
            for (int j = scol; j <= ecol; j++) {
                answer.push_back(mat[srow][j]);
            }
            srow++;

            for (int i = srow; i <= erow; i++) {
                answer.push_back(mat[i][ecol]);
            }
            ecol--;

            if (srow <= erow) {
                for (int j = ecol; j >= scol; j--) {
                    answer.push_back(mat[erow][j]);
                }
                erow--;
            }

            if (scol <= ecol) {
                for (int i = erow; i >= srow; i--) {
                    answer.push_back(mat[i][scol]);
                }
                scol++;
            }
        }

        return answer;
    }
};