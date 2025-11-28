 // Q31: Write a program to take a number as input and print its equivalent binary representation.

/*
Sample Test Cases:
Input 1:
10
Output 1:
1010

Input 2:
7
Output 2:
111

*/
#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    // Handle the case when number is 0
    if (num == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    int binary[32];  // 32-bit integer
    int index = 0;

    while (num > 0) {
        binary[index] = num % 2;
        num = num / 2;
        index++;
    }

    printf("Binary: ");

    // Print in correct order
    for (int i = index - 1; i >= 0; i--) {
        printf("%d", binary[i]);
    }

    printf("\n");
    return 0;
}
