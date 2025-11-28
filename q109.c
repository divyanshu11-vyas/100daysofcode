// Q109 : Write a program to take an integer array arr and an integer k as inputs. Print the maximum sum of all the subarrays of size k.

/*
Sample Test Cases:
Input 1:
arr[100, 200, 300, 400] = , k = 2
Output 1:
700

Input 2:
arr[1, 4, 2, 10, 23, 3, 1, 0, 20] = , k = 4
Output 2:
39

Input 3:
arr[100, 200, 300, 400] = , k = 1
Output 3:
400

*/
#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array (n): ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter k: ");
    scanf("%d", &k);
    if (k > n || k <= 0) {
        printf("Invalid k");
        return 0;
    }
    int maxSum = -2147483648; // minimum 32-bit int
    for (int i = 0; i <= n - k; i++) {
        int currentSum = 0;
        for (int j = i; j < i + k; j++) {
            currentSum += arr[j];
        }
        if (currentSum > maxSum) {
            maxSum = currentSum;
        }
    }
    printf("%d", maxSum);
    return 0;
}
