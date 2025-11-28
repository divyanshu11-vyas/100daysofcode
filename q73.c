// Q73 : Find the sum of each row of a matrix and store it in an array.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15

*/
#include <stdio.h>

int main() {
    int rows, cols;
    printf("enter row and columns :\n");
    scanf("%d %d", &rows, &cols);
    int mat[rows][cols];
    int rowSum[rows];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
             printf("enter the matrix values\n");
            scanf("%d", &mat[i][j]);
        }
    }

    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++) {
            sum += mat[i][j];
        }
        rowSum[i] = sum;
    }
    for (int i = 0; i < rows; i++)
        printf("%d ", rowSum[i]);
    return 0;
}
