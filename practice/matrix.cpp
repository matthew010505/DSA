#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool matrix[3][4] = { { 1, 0, 0, 1 },
                          { 0, 0, 1, 0 },
                          { 0, 0, 0, 0 } };
    int rows = sizeof(matrix) / sizeof(matrix[0]);  //.size() in vectors
    int cols = sizeof(matrix[0]) / sizeof(matrix[0][0]); 
    bool rowFlags[rows];
    bool colFlags[cols];
    int i, j;
    for (i = 0; i < rows; i++)
        rowFlags[i] = 0;
    for (i = 0; i < cols; i++)
        colFlags[i] = 0;
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] == 1) {
                rowFlags[i] = 1;
                colFlags[j] = 1;
            }
        }
    }
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            if (rowFlags[i] == 1 || colFlags[j] == 1)
                matrix[i][j] = 1;

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++)
            cout << matrix[i][j];
        cout << endl;
    }

    return 0;
}
