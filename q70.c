// Q70 : Rotate an array to the right by k positions.

/*
Sample Test Cases:
Input 1:
5
1 2 3 4 5
2
Output 1:
4 5 1 2 3

*/
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter n :\n");
    
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

        printf("Enter k :\n");
        
    scanf("%d", &k);
    k = k % n;   // In case k > n
    int result[n];
    int index = 0;
    // Insert last k elements first
    for (int i = n - k; i < n; i++)
        result[index++] = arr[i];

    // Then insert remaining elements
    for (int i = 0; i < n - k; i++)
        result[index++] = arr[i];

    // Print rotated array
    for (int i = 0; i < n; i++)
        printf("%d ", result[i]);
    return 0;
}
