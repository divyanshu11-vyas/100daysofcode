// Q78 : Find the sum of main diagonal elements for a square matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
15

*/
#include <stdio.h>

int main() {
    int n, m;
    printf("enter the values of n and m :\n");
    scanf("%d %d", &n, &m);

    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("enter the value for order : \n");
            
            scanf("%d", &a[i][j]);
        }
    }

    if (n != m) {
        printf("Invalid");
        return 0;
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += a[i][i];
    }
    printf("%d", sum);

    return 0;
}
