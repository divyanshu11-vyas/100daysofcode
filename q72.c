// Q72 : Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/
#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and columns\n");
    scanf("%d %d", &rows, &cols);
    int mat[rows][cols];
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            
            printf("enter the matrix values\n");
            scanf("%d", &mat[i][j]);
            sum += mat[i][j];
        }
    }
    printf("%d", sum);
    return 0;
}
