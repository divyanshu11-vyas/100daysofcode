// Q74 : Find the transpose of a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
1 4
2 5
3 6

*/
#include <stdio.h>

int main() {
    int m, n;
    printf("Enter the value of m and n :\n");
    
    scanf("%d %d", &m, &n);
    int a[m][n];
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter the values of matrix :\n");
            scanf("%d", &a[i][j]);
        }
    }
    for (int j = 0; j < n; j++) {
        for (int i = 0; i < m; i++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
