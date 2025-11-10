//Q1: Write a program to input two numbers and display their sum.

/*
Sample Test Cases:
Input 1:
3 4
Output 1:
Sum = 7

Input 2:
-1 20
Output 2:
Sum = 19

*/
#include<stdio.h>
int main()
{
    int a;
    int b;
    printf("Enter the numbers for the sum :\n");
    scanf("%d %d", &a, &b);
    printf("the sum of these two numbers is %d", a+b);
return 0;
}