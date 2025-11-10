//Q4: Write a program to calculate the area and circumference of a circle given its radius.

/*
Sample Test Cases:
Input 1:
7
Output 1:
Area=153.94, Circumference=43.96

Input 2:
3
Output 2:
Area=28.27, Circumference=18.85

*/
#include <stdio.h>

int main()
{
    float radius;
    printf("Enter the radius: ");
    scanf("%f", &radius);

    float area = 3.14 * radius * radius;
    float circumference = 2 * 3.14 * radius;

    printf("The area and circumference are %.2f and %.2f\n", area, circumference);
    return 0;
}
