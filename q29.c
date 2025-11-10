// Q29 : Write a program to calculate the factorial of a number.

/*
Sample Test Cases:
Input 1:
5
Output 1:
120

Input 2:
3
Output 2:
6

*/
#include<stdio.h>

int factorial(int);
// function prototype

int factorial(int n){
    if(n==1 || n==0){  // base condition
        return 1;
    }
    else{
    return factorial(n-1)*n;
}
}
int main()
{
    int n;
    printf("enter the number for factorial :\n");
    scanf("%d", &n);
    printf("the factorial of %d is %d", n, factorial(n));
    
return 0;
}