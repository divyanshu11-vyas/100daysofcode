// Q80 : Multiply two matrices.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
3 2
7 8
9 10
11 12
Output 1:
58 64
139 154

*/
#include <stdio.h>

int main() {
    int m1, n1, m2, n2;
    printf("enter the value of m1 and n1 :\n");
    
    scanf("%d %d", &m1, &n1);
    int a[m1][n1];
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n1; j++) {
            printf("enter order :\n");
            
            scanf("%d", &a[i][j]);
        }
    }
    printf("enter m2 and n2 :\n");
    
    scanf("%d %d", &m2, &n2);
    int b[m2][n2];
    for (int i = 0; i < m2; i++) {
        for (int j = 0; j < n2; j++) {
            printf("enter order :\n");
            
            scanf("%d", &b[i][j]);
        }
    }
    if (n1 != m2) {
        printf("Multiplication not possible");
        return 0;
    }
    int c[m1][n2];
    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            c[i][j] = 0;
        }
    }

    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            for (int k = 0; k < n1; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    for (int i = 0; i < m1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
