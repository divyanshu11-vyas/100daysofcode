// Q79 : Perform diagonal traversal of a matrix.

/*
Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9

*/
#include <stdio.h>

int main() {
    int n, m;
    printf("enter the value of n and m :\n");
    
    scanf("%d %d", &n, &m);
    int a[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("enter order :\n");
            
            scanf("%d", &a[i][j]);
        }
    }
    for (int d = 0; d < n + m - 1; d++) {
        int r = d < m ? 0 : d - m + 1;
        int c = d < m ? d : m - 1;

        // If diagonal index is even → print top to bottom
        if (d % 2 == 0) {
            int i = r, j = c;
            while (i < n && j >= 0) {
                printf("%d ", a[i][j]);
                i++;
                j--;
            }
        }
        // If diagonal index is odd → print bottom to top
        else {
            int i = r, j = c;
            // Move to last valid element on this diagonal
            while (i < n && j >= 0) {
                i++;
                j--;
            }
            i--; j++; // Step back to last valid

            while (i >= r && j <= c) {
                printf("%d ", a[i][j]);
                i--;
                j++;
            }
        }
    }

    return 0;
}
