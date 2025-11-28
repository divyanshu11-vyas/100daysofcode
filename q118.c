// Q118 : Write a program to take an input array of size n. The array should contain all the integers between 0 to n except for one. Print that missing number

/*
Sample Test Cases:
Input 1:
nums1 = [0,3,2,4]
Output 1:
1

Input 2:
nums1 = [1,2,3]
Output 2:
0

Input 3:
nums1 = [0,4,3,1,5]
Output 3:
2

*/
#include <stdio.h>

int main() {
    int nums[100];
    int n, i;
    int sum = 0, expectedSum;
    printf("Enter size of array:\n");
    scanf("%d", &n);
    printf("Enter %d elements (numbers from 0 to %d except one is missing):\n", n, n);
    for (i = 0; i < n; i++) {
        printf("Enter nums[%d]:\n", i);
        scanf("%d", &nums[i]);
    }

    for (i = 0; i < n; i++) {
        sum += nums[i];
    }

    expectedSum = n * (n + 1) / 2;
    printf("Missing number is: %d", expectedSum - sum);
    return 0;
}
