// Q77 : Check if the elements on the diagonal of a matrix are distinct.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True

*/
#include <stdio.h>

int main() {
    int n, m;
    printf("enter n and m :\n");
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("enter the matrix values :\n");
            
            scanf("%d", &a[i][j]);
        }
    }
    if (n != m) {
        printf("False");
        return 0;
    }
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i][i] == a[j][j]) {
                printf("False");
                return 0;
            }
        }
    }
    printf("True");
    return 0;
}
