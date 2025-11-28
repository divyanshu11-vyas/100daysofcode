// Q37: Write a program to find the LCM of two numbers.

/*
Sample Test Cases:
Input 1:
4 5
Output 1:
20

Input 2:
7 3
Output 2:
21

*/
#include <stdio.h>

int main() {
    int a, b, x, y, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    x = a;
    y = b;

    // Find GCD using Euclidean Algorithm
    while (y != 0) {
        temp = y;
        y = x % y;
        x = temp;
    }

    int gcd = x;
    long long lcm = (long long)a * b / gcd;  

    printf("LCM = %lld\n", lcm);

    return 0;
}
