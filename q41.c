// Q41: Write a program to swap the first and last digit of a number.

/*
Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001

*/
#include <stdio.h>

int main() {
    int num, original, last, first, temp, digits = 0, pow10 = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;
    last = num % 10;      // last digit

    // Find first digit and number of digits
    while (num >= 10) {
        num /= 10;
        digits++;
        pow10 *= 10;      // 10^(digits)
    }
    first = num;          // first digit

    // Remove first digit from the number
    temp = original % pow10;

    // Remove last digit from temp
    temp /= 10;

    // Construct new number: last * 10^digits + (middle part)*10 + first
    int swapped = last * pow10 + temp * 10 + first;

    printf("Number after swapping first and last digit: %d\n", swapped);

    return 0;
}
