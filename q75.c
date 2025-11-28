// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/
#include <stdio.h>

int main() {
    int m1, n1, m2, n2;
    printf("enter m1 and n1 :\n");
    
    scanf("%d %d", &m1, &n1);

    int a[m1][n1];
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            printf("enter matrix values :\n");
            
            scanf("%d", &a[i][j]);
        }
    }

    printf("enter m2 and n2 :\n");
    
    scanf("%d %d", &m2, &n2);
    if (m1 != m2 || n1 != n2) {
        printf("Matrix addition not possible");
        return 0;
    }
    int b[m2][n2];
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            scanf("%d", &b[i][j]);
        }
    }
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }

    return 0;
}
