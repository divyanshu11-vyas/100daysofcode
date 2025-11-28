// Q64 : Find the digit that occurs the most times in an integer number.

/*
Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7

*/
#include <stdio.h>

int main() {
    long long num;
    int count[10] = {0};

    printf("Enter an integer: ");
    scanf("%lld", &num);
    if (num < 0)
        num = -num;
    if (num == 0)
        count[0] = 1;

    while (num > 0) {
        int digit = num % 10;
        count[digit]++;
        num /= 10;
    }
    int maxDigit = 0;
    int maxCount = count[0];
    for (int i = 1; i < 10; i++) {
        if (count[i] > maxCount) {
            maxCount = count[i];
            maxDigit = i;
        }
    }

    printf("Digit with maximum occurrences: %d\n", maxDigit);
    printf("Number of occurrences: %d\n", maxCount);

    return 0;
}
