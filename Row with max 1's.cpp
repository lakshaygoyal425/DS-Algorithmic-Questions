#include <iostream>
using namespace std;
 
#define M 5
#define N 5
 
int findRowIndex(bool mat[][N])
{
    // i, j stores current row and column index
    int i, j;
 
    // stores row number with maximum index
    int row = -1;
 
    // start from top-rightmost cell of the matrix
    i = 0, j = N - 1;
 
    while (i <= M - 1 && j >= 0)
    {
        // move left if current cell has value 1
        if (mat[i][j])
            j--, row = i;    // update row number
        else    // else move down
            i++;
    }
 
    return row + 1;
}
 
int main()
{
    bool mat[M][N] =
    {
        { 0, 0, 0, 1, 1 },
        { 0, 0, 1, 1, 1 },
        { 0, 0, 0, 0, 0 },
        { 0, 1, 1, 1, 1 },
        { 0, 0, 0, 0, 1 }
    };
 
    int rowIndex = findRowIndex(mat);
 
    // rowIndex = 0 means no 1's are present in the matrix
    if (rowIndex)
        cout << "Maximum 1's are present in the row " << rowIndex;
 
    return 0;
}
